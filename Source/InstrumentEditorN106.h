/*
** FamiTracker - NES/Famicom sound tracker
** Copyright (C) 2005-2010  Jonathan Liss
**
** This program is free software; you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation; either version 2 of the License, or
** (at your option) any later version.
**
** This program is distributed in the hope that it will be useful, 
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU 
** Library General Public License for more details.  To obtain a 
** copy of the GNU Library General Public License, write to the Free 
** Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
**
** Any permitted reproduction of these routines, in whole or in part,
** must bear this legend.
*/

#pragma once

class CInstrumentEditorN106 : public CSequenceInstrumentEditPanel
{
	DECLARE_DYNAMIC(CInstrumentEditorN106)

public:
	CInstrumentEditorN106(CWnd* pParent = NULL);   // standard constructor
	virtual ~CInstrumentEditorN106();
	virtual int GetIDD() const { return IDD; };
	virtual TCHAR *GetTitle() const { return _T("Envelopes"); };

	// Public
	void SelectInstrument(int Instrument);
	void SetSequenceString(CString Sequence, bool Changed);


// Dialog Data
	enum { IDD = IDD_INSTRUMENT_N106 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	virtual void OnKeyReturn();

	void SelectSequence(int Sequence, int Type);
	void TranslateMML(CString String, int Max, int Min);

	int m_iSelectedSetting;

	CWnd				*m_pParentWin;
	CSequenceEditor		*m_pSequenceEditor;
	CInstrumentN106		*m_pInstrument;
	CSequence 			*m_pSequence;

protected:
	static LPCTSTR INST_SETTINGS_N106[];

	static const int MAX_VOLUME = 15;
	static const int MAX_DUTY = 7;

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	afx_msg void OnLvnItemchangedInstsettings(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnEnChangeSeqIndex();
	afx_msg void OnBnClickedFreeSeq();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	virtual BOOL DestroyWindow();
};