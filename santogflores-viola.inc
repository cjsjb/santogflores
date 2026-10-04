\context Staff = "Viola" <<
	\set Staff.instrumentName = "Viola"
	\set Staff.shortInstrumentName = "Vla."
	\set Staff.midiInstrument = "Viola"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-viola" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		$(let ((val (ly:parser-lookup 'easy))) (if (null? val) #{ #} val))

		\time 4/4
		\clef "alto"
		\key f \major

		f' 4. e' d' 4  |
		c' 1  |
		bes 4. c' d' 4  |
		c' 1  |
		\bar "|."
	}
>>
