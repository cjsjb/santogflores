% This LilyPond file was generated by Rosegarden 1.7.3
\version "2.10.0"
% point and click debugging is disabled
#(ly:set-option 'point-and-click #f)
\header {
	title = "Santo"
	composer = "Gerardo Flores"
	tagline = "Coro Juvenil San Juan Bosco"
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
	\tempo 4 = 110 \skip 1*48
}
globalBreaks = {
	\skip 1*12 \break
	\skip 1*17 \break
}
\score {
	<<
		% force offset of colliding notes in chords:
		\override Score.NoteColumn #'force-hshift = #1.0

		\include "santogflores-acordes.inc"
		\include "santogflores-voz.inc"

	>>

	\layout {
		\context {
			%\RemoveEmptyStaffContext
		}
	}
}
