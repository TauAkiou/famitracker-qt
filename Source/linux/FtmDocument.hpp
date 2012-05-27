#ifndef _FTM_DOCUMENT_HPP
#define _FTM_DOCUMENT_HPP

// Get access to some APU constants
#include "../APU/APU.H"
#include "types.hpp"
#include "FamiTrackerTypes.h"
#include "Instrument.h"

#include <string>

class CPatternData;
class Document;
class IO;
class CTrackerChannel;

// Default song settings
const unsigned int DEFAULT_TEMPO_NTSC   = 150;
const unsigned int DEFAULT_TEMPO_PAL    = 125;
const unsigned int DEFAULT_SPEED	    = 6;
const unsigned int DEFAULT_MACHINE_TYPE = NTSC;

// Columns
enum {C_NOTE,
	  C_INSTRUMENT1, C_INSTRUMENT2,
	  C_VOLUME,
	  C_EFF_NUM, C_EFF_PARAM1, C_EFF_PARAM2,
	  C_EFF2_NUM, C_EFF2_PARAM1, C_EFF2_PARAM2,
	  C_EFF3_NUM, C_EFF3_PARAM1, C_EFF3_PARAM2,
	  C_EFF4_NUM, C_EFF4_PARAM1, C_EFF4_PARAM2};

const unsigned int COLUMNS = 7;

// Old sequence list, kept for compability
struct stSequence {
	unsigned int Count;
	signed char Length[MAX_SEQUENCE_ITEMS];
	signed char Value[MAX_SEQUENCE_ITEMS];
};

class FtmDocument
{
public:
	FtmDocument();
	~FtmDocument();

	void createEmpty();

	void read(IO *io);
	void write(IO *io);

	bool doForceBackup() const{ return bForceBackup; }

	void			ResetChannels();
	void			RegisterChannel(CTrackerChannel *pChannel, int ChannelType, int ChipType);
	CTrackerChannel	*GetChannel(int Index) const;

	int				GetChannelType(int Channel) const;
	int				GetChipType(int Channel) const;
	int				GetChannelCount() const{ return m_iRegisteredChannels; }

	// Local (song) data
	void			SetFrameCount(unsigned int Count);
	void			SetPatternLength(unsigned int Length);
	void			SetSongSpeed(unsigned int Speed);
	void			SetSongTempo(unsigned int Tempo);

	unsigned int	GetPatternLength()		const { return m_pSelectedTune->GetPatternLength(); }
	unsigned int	GetFrameCount()			const { return m_pSelectedTune->GetFrameCount(); }
	unsigned int	GetSongSpeed()			const { return m_pSelectedTune->GetSongSpeed(); }
	unsigned int	GetSongTempo()			const { return m_pSelectedTune->GetSongTempo(); }
	unsigned int	GetAvailableChannels()	const { return m_iChannelsAvailable; }

	unsigned int	GetPatternLength(int Track) const { return m_pTunes[Track]->GetPatternLength(); }
	unsigned int	GetFrameCount(int Track)	const { return m_pTunes[Track]->GetFrameCount(); }
	unsigned int	GetSongSpeed(int Track)		const { return m_pTunes[Track]->GetSongSpeed(); }
	unsigned int	GetSongTempo(int Track)		const { return m_pTunes[Track]->GetSongTempo(); }

	unsigned int	GetEffColumns(int Track, unsigned int Channel) const;
	unsigned int	GetEffColumns(unsigned int Channel) const;
	void			SetEffColumns(unsigned int Channel, unsigned int Columns);

	unsigned int 	GetPatternAtFrame(int Track, unsigned int Frame, unsigned int Channel) const;
	unsigned int	GetPatternAtFrame(unsigned int Frame, unsigned int Channel) const;
	void			SetPatternAtFrame(unsigned int Frame, unsigned int Channel, unsigned int Pattern);

	int				GetFirstFreePattern(int Channel);

	void			ClearPatterns();

	// Pattern editing
	void			IncreasePattern(unsigned int Frame, unsigned int Channel, int Count);
	void			DecreasePattern(unsigned int Frame, unsigned int Channel, int Count);
	void			IncreaseInstrument(unsigned int Frame, unsigned int Channel, unsigned int Row);
	void			DecreaseInstrument(unsigned int Frame, unsigned int Channel, unsigned int Row);
	void			IncreaseVolume(unsigned int Frame, unsigned int Channel, unsigned int Row);
	void			DecreaseVolume(unsigned int Frame, unsigned int Channel, unsigned int Row);
	void			IncreaseEffect(unsigned int Frame, unsigned int Channel, unsigned int Row, unsigned int Index);
	void			DecreaseEffect(unsigned int Frame, unsigned int Channel, unsigned int Row, unsigned int Index);

	void			SetNoteData(unsigned int Frame, unsigned int Channel, unsigned int Row, stChanNote *Data);
	void			GetNoteData(unsigned int Frame, unsigned int Channel, unsigned int Row, stChanNote *Data) const;

	void			SetDataAtPattern(unsigned int Track, unsigned int Pattern, unsigned int Channel, unsigned int Row, stChanNote *Data);
	void			GetDataAtPattern(unsigned int Track, unsigned int Pattern, unsigned int Channel, unsigned int Row, stChanNote *Data) const;

	unsigned int	GetNoteEffectType(unsigned int Frame, unsigned int Channel, unsigned int Row, int Index) const;
	unsigned int	GetNoteEffectParam(unsigned int Frame, unsigned int Channel, unsigned int Row, int Index) const;

	bool			InsertNote(unsigned int Frame, unsigned int Channel, unsigned int Row);
	bool			DeleteNote(unsigned int Frame, unsigned int Channel, unsigned int Row, unsigned int Column);
	bool			ClearRow(unsigned int Frame, unsigned int Channel, unsigned int Row);
	bool			RemoveNote(unsigned int Frame, unsigned int Channel, unsigned int Row);

	// Global (module) data
	void			SetEngineSpeed(unsigned int Speed);
	void			SetMachine(unsigned int Machine);
	unsigned int	GetMachine() const		{ return m_iMachine; }
	unsigned int	GetEngineSpeed() const	{ return m_iEngineSpeed; }
	unsigned int	GetFrameRate(void) const;

	void			SelectExpansionChip(unsigned char Chip);
	unsigned char	GetExpansionChip() const { return m_iExpansionChip; }
	bool			ExpansionEnabled(int Chip) const;

	void			SetSongInfo(const char *Name, const char *Artist, const char *Copyright);
	char			*GetSongName()		 { return m_strName; }
	char			*GetSongArtist()	 { return m_strArtist; }
	char			*GetSongCopyright()	 { return m_strCopyright; }

	int				GetVibratoStyle() const;
	void			SetVibratoStyle(int Style);

	// Track management functions
	void			SelectTrack(unsigned int Track);
//	void			SelectTrackFast(unsigned int Track);	//	TODO: should be removed
	unsigned int	GetTrackCount() const{ return m_iTracks+1; }
	unsigned int	GetSelectedTrack() const{ return m_iTrack; }
	const char		*GetTrackTitle(unsigned int Track) const;
	bool			AddTrack();
	void			RemoveTrack(unsigned int Track);
	void			SetTrackTitle(unsigned int Track, std::string Title);
	void			MoveTrackUp(unsigned int Track);
	void			MoveTrackDown(unsigned int Track);

	// Instruments functions
	CInstrument		*GetInstrument(int Index);
	int				GetInstrumentCount() const;
	bool			IsInstrumentUsed(int Index) const;

	int				AddInstrument(const char *Name, int ChipType);				// Add a new instrument
	int				AddInstrument(CInstrument *pInst);
	void			RemoveInstrument(unsigned int Index);						// Remove an instrument
	void			SetInstrumentName(unsigned int Index, const char *Name);	// Set the name of an instrument
	void			GetInstrumentName(unsigned int Index, char *Name, unsigned char sz) const;	// Get the name of an instrument
	int				CloneInstrument(unsigned int Index);						// Create a copy of an instrument
	CInstrument		*CreateInstrument(int InstType);							// Creates a new instrument of InstType
	int				FindFreeInstrumentSlot();
	void			SaveInstrument(unsigned int Instrument, IO *io);
	int 			LoadInstrument(IO *io);
	int				GetInstrumentType(unsigned int Index) const;

	// Sequences functions
	CSequence		*GetSequence(int Chip, int Index, int Type);
	CSequence		*GetSequence(int Index, int Type);
	int				GetSequenceItemCount(int Index, int Type) const;
	int				GetFreeSequence(int Type) const;
	int				GetSequenceCount(int Type) const;

	CSequence		*GetSequenceVRC6(int Index, int Type);
	CSequence		*GetSequenceVRC6(int Index, int Type) const;
	int				GetSequenceItemCountVRC6(int Index, int Type) const;
	int				GetFreeSequenceVRC6(int Type) const;

	// DPCM samples
	CDSample		*GetDSample(unsigned int Index);
	int				GetSampleCount() const;
	int				GetFreeDSample() const;
	void			RemoveDSample(unsigned int Index);
	void			GetSampleName(unsigned int Index, char *Name) const;
	int				GetSampleSize(unsigned int Sample);
	char			GetSampleData(unsigned int Sample, unsigned int Offset);
	int				GetTotalSampleSize() const;

	// For file version compability
	void			ConvertSequence(stSequence *OldSequence, CSequence *NewSequence, int Type);

	void			SwitchToTrack(unsigned int Track);
	void			AllocateSong(unsigned int Song);

	void SetModifiedFlag(bool modified=true){ m_bModified = modified; }
	void UpdateViews(){ /* TODO - dan */ }

	int Highlight, SecondHighlight;
private:
	bool bForceBackup;
	bool readOld(Document *doc, IO *io);
	bool readNew(Document *doc, IO *io);

	bool readNew_params(Document *doc);
	bool readNew_header(Document *doc);
	bool readNew_instruments(Document *doc);
	bool readNew_sequences(Document *doc);
	bool readNew_frames(Document *doc);
	bool readNew_patterns(Document *doc);
	bool readNew_dsamples(Document *doc);
	bool readNew_sequences_vrc6(Document *doc);

	CTrackerChannel	*m_pChannels[CHANNELS];
	int				m_iRegisteredChannels;
	int				m_iChannelTypes[CHANNELS];
	int				m_iChannelChip[CHANNELS];

	unsigned int	m_iFileVersion;			// Loaded file version
	unsigned int	m_iTrack;				// Selected track

	CPatternData	*m_pSelectedTune;			// Points to selecte tune
	CPatternData	*m_pTunes[MAX_TRACKS];		// List of all tunes
	std::string		m_sTrackNames[MAX_TRACKS];

	unsigned int	m_iTracks;					// Track count
	unsigned int	m_iChannelsAvailable;		// Number of channels added

	// Module properties
	unsigned char	m_iExpansionChip;	// Expansion chip
	int				m_iVibratoStyle;	// 0 = old style, 1 = new style

	// Instruments, samples and sequences
	CInstrument		*m_pInstruments[MAX_INSTRUMENTS];
	CDSample		m_DSamples[MAX_DSAMPLES];					// The DPCM sample list
	CSequence		*m_pSequences2A03[MAX_SEQUENCES][SEQ_COUNT];
	CSequence		*m_pSequencesVRC6[MAX_SEQUENCES][SEQ_COUNT];
	CSequence		*m_pSequencesN106[MAX_SEQUENCES][SEQ_COUNT];

	// NSF info
	char			m_strName[32];				// Song name
	char			m_strArtist[32];			// Song artist
	char			m_strCopyright[32];			// Song copyright

	unsigned int	m_iMachine;					// NTSC / PAL
	unsigned int	m_iEngineSpeed;				// Refresh rate

	// Things below are for compability with older files
	stSequence		m_Sequences[MAX_SEQUENCES][SEQ_COUNT];		// Allocate one sequence-list for each effect
	stSequence		m_TmpSequences[MAX_SEQUENCES];

	bool m_bModified;
};

#endif
