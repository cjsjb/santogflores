\context Staff = "soprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Soprano"
	\set Staff.shortInstrumentName = "S."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-soprano" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\time 4/4
		\key f \major

		R1*4  |
%% 5
		f' 4. c' 8 ~ c' 2  |
		g' 4. e' 8 ~ e' 2  |
		bes' 4 bes' a' f'  |
		g' 2. r4  |
		f' 4. c' 8 ~ c' 2  |
%% 10
		g' 4. e' 8 ~ e' 2  |
		bes' 4 bes' a' f'  |
		g' 2. r4  |
		a' 4 g' 8 f' ~ f' 4 g'  |
		a' 4. f' r4  |
%% 15
		a' 4. g' f' 4  |
		g' 4. ( d' ) d' 4  |
		bes' 4. a' f' 4  |
		bes' 4. a' r4  |
		bes' 4. ( a' ) f' 4  |
%% 20
		f' 4 ( g' 8 ) g' ~ g' 2 ~  |
		g' 2 r4 c'  |
		bes' 4. a' 4 -\staccato r8 c' 4  |
		bes' 4. a' 4 -\staccato r8 c' 4  |
		bes' 4. a' f' 4  |
%% 25
		f' 4 ( g' 8 ) g' ~ g' r c' 4  |
		bes' 4. a' 4 r8 c' 4  |
		bes' 4. a' 4 r8 c' 4  |
		bes' 4. a' f' 4  |
		f' 4 ( g' 8 ) g' ~ g' r a' 4  |
%% 30
		a' 4. f' g' 4  |
		a' 4. f' r4  |
		a' 4. ( g' ) f' 4  |
		g' 4. d' ~ d' 8 r  |
		bes' 4. ( a' ) f' 4  |
%% 35
		g' 2. r4  |
		bes' 4. ( a' ) f' 4  |
		g' 1 ~  |
		g' 2 r4 c'  |
		bes' 4. a' 4 -\staccato r8 c' 4  |
%% 40
		bes' 4. a' 4 -\staccato r8 c' 4  |
		bes' 4. a' f' 4  |
		f' 4 ( g' 8 ) g' ~ g' r c' 4  |
		bes' 4. a' 4 r8 c' 4  |
		bes' 4. a' 4 r8 c' 4  |
%% 45
		bes' 4. a' f' 4  |
		f' 1  |
		f' 1  |
		R1  |
		\bar "|."
	}

	\new Lyrics \lyricsto "voz-soprano" {
		San -- to, __ san -- to, __ san -- "to es" el Se -- ñor.
		San -- to, __ san -- to, __ san -- "to es" el Se -- ñor.

		Dios del u -- ni -- ver -- so, lle -- nos es -- tán __
		el cie -- "lo y" la tie -- rra de __ tu glo -- ria. __

		¡Ho -- san -- na, ho -- san -- na,
		ho -- san -- "na en" el cie __ lo!
		¡Ho -- san -- na, ho -- san -- na,
		ho -- san -- "na en" el cie __ lo!

		Ben -- di -- "to el" que vie -- ne, en __ el nom -- bre
		del __ Se -- ñor, del __ Se -- ñor. __

		¡Ho -- san -- na, ho -- san -- na,
		ho -- san -- "na en" el cie __ lo!
		¡Ho -- san -- na, ho -- san -- na,
		ho -- san -- "na en" el cie -- lo!
	}
>>
