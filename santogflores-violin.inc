\context Staff = "Violin" <<
	\set Staff.instrumentName = "Violín"
	\set Staff.shortInstrumentName = "Vln."
	\set Staff.midiInstrument = "Violin"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-violin" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		$(let ((val (ly:parser-lookup 'easy))) (if (null? val) #{ #} val))

		\time 4/4
		\clef "treble"
		\key f \major

		f' 16 g' a' bes' c'' d'' e'' f'' ~ f'' 2  |
		r8 e'' 16 f'' g'' e'' c'' 8 ~ c'' c''' c''' 4  |
		bes' 16 c'' d'' ees'' f'' g'' a'' bes'' ~ bes'' 2  |
		c'' 16 d'' e'' f'' g'' a'' bes'' c''' ~ c''' 2  |
		\bar "|."
	}
>>
