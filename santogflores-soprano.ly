\version "2.10.0"
#(ly:set-option 'point-and-click #f)
\header {
	title = "Santo"
	composer = "P. Gerardo Javier Flores Cárdenas"
	tagline = "Coro Juvenil San Juan Bosco"
	instrument = "Soprano"
}
#(set-global-staff-size 20)
#(set-default-paper-size "letter")
\paper {
	#(define line-width (* 7 in))
	print-first-page-number = ##t
	ragged-bottom = ##t
	first-page-number = 1
}
global = {
	\time 4/4 \skip 1*48
}
globalTempo = {
	\tempo 4 = 110
}
\score {
	<<
		% force offset of colliding notes in chords:
		\override Score.NoteColumn #'force-hshift = #1.0

		\include "santogflores-acordes.inc"
		\include "santogflores-soprano.inc"

	>>

	\layout {
		\context {
			%\RemoveEmptyStaffContext
		}
	}
}
