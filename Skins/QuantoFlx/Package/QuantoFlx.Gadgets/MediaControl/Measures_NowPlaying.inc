[Rainmeter]
Update=1000

[Variables]
Ac.Play_or_Pause=[!CommandMeasure "Ms.Status" "PlayPause"][!Update][!Redraw]
Ac.Next=[!CommandMeasure "Ms.Status" "Next"][!Update][!Redraw]
Ac.Previous=[!CommandMeasure "Ms.Status" "Previous"][!Update][!Redraw]
Ac.Shuffle=[!CommandMeasure "Ms.Status" "SetShuffle -1"][!Update][!Redraw]
Ac.Repeat=[!CommandMeasure "Ms.Status" "SetRepeat -1"][!Update][!Redraw]
Ac.SetRating_0=[!CommandMeasure "Ms.Status" "SetRating 0"][!Update][!Redraw]
Ac.SetRating_1=[!CommandMeasure "Ms.Status" "SetRating 1"][!Update][!Redraw]
Ac.SetRating_2=[!CommandMeasure "Ms.Status" "SetRating 2"][!Update][!Redraw]
Ac.SetRating_3=[!CommandMeasure "Ms.Status" "SetRating 3"][!Update][!Redraw]
Ac.SetRating_4=[!CommandMeasure "Ms.Status" "SetRating 4"][!Update][!Redraw]
Ac.SetRating_5=[!CommandMeasure "Ms.Status" "SetRating 5"][!Update][!Redraw]
Ac.ToggleThumbsUp=[!CommandMeasure "Ms.Status" "SetRating 5"][!Update][!Redraw]
Ac.ToggleThumbsDown=[!CommandMeasure "Ms.Status" "SetRating 1"][!Update][!Redraw]

Vb.AIMP.SPP=1
Vb.AIMP.SSP=1
Vb.AIMP.SSN=1
Vb.AIMP.SSP=1
Vb.AIMP.SSV=1
Vb.AIMP.STR=1
Vb.AIMP.STS=1
Vb.AIMP.SSR=1
Vb.AIMP.RSY=3

Vb.CAD.SPP=1
Vb.CAD.SSP=1
Vb.CAD.SSN=1
Vb.CAD.SSP=1
Vb.CAD.SSV=1
Vb.CAD.STR=1
Vb.CAD.STS=1
Vb.CAD.SSR=1
Vb.CAD.RSY=3

Vb.iTunes.SPP=1
Vb.iTunes.SSP=1
Vb.iTunes.SSN=1
Vb.iTunes.SSP=1
Vb.iTunes.SSV=1
Vb.iTunes.STR=1
Vb.iTunes.STS=1
Vb.iTunes.SSR=1
Vb.iTunes.RSY=3

Vb.Spotify.SPP=1
Vb.Spotify.SSP=1
Vb.Spotify.SSN=1
Vb.Spotify.SSP=0
Vb.Spotify.SSV=0
Vb.Spotify.STR=0
Vb.Spotify.STS=0
Vb.Spotify.SSR=0
Vb.Spotify.RSY=0

Vb.Winamp.SPP=1
Vb.Winamp.SSP=1
Vb.Winamp.SSN=1
Vb.Winamp.SSP=1
Vb.Winamp.SSV=1
Vb.Winamp.STR=1
Vb.Winamp.STS=1
Vb.Winamp.SSR=1
Vb.Winamp.RSY=3

Vb.WMP.SPP=1
Vb.WMP.SSP=1
Vb.WMP.SSN=1
Vb.WMP.SSP=1
Vb.WMP.SSV=1
Vb.WMP.STR=0
Vb.WMP.STS=0
Vb.WMP.SSR=1
Vb.WMP.RSY=3

Vb.WLM.SPP=1
Vb.WLM.SSP=1
Vb.WLM.SSN=1
Vb.WLM.SSP=0
Vb.WLM.SSV=0
Vb.WLM.STR=0
Vb.WLM.STS=0
Vb.WLM.SSR=0
Vb.WLM.RSY=0

Vb.SuTt_Ms.Cover.AIMP=
Vb.SuTt_Ms.Cover.CAD=
Vb.SuTt_Ms.Cover.iTunes=
Vb.SuTt_Ms.Cover.Spotify=#Pk@#Image\SpotifyCover
Vb.SuTt_Ms.Cover.Winamp=
Vb.SuTt_Ms.Cover.WMP=
Vb.SuTt_Ms.Cover.WLM=#Pk@#Image\WLMCover

[Ms.Status]
Measure=NowPlaying
PlayerName=#PlayerName#
PlayerType=Status
DynamicVariables=1

[Ms.Player]
Measure=String
String=#PlayerName#
DynamicVariables=1

[Ms.Title]
Measure=NowPlaying
PlayerName=[Ms.Status]
PlayerType=Title
DynamicVariables=1

[Ms.Artist]
Measure=NowPlaying
PlayerName=[Ms.Status]
PlayerType=Artist
DynamicVariables=1

[Ms.Album]
Measure=NowPlaying
PlayerName=[Ms.Status]
PlayerType=Album
DynamicVariables=1

[Ms.Cover]
Measure=NowPlaying
PlayerName=[Ms.Status]
PlayerType=Cover
Substitute="":"[#Vb.SuTt_Ms.Cover.[#PlayerName]]"
DynamicVariables=1

[Ms.Duration]
Measure=NowPlaying
PlayerName=[Ms.Status]
PlayerType=Duration
DynamicVariables=1

[Ms.Position]
Measure=NowPlaying
PlayerName=[Ms.Status]
PlayerType=Position
DynamicVariables=1

[Ms.Progress]
Measure=NowPlaying
PlayerName=[Ms.Status]
PlayerType=Progress
DynamicVariables=1

[Ms.State]
Measure=NowPlaying
PlayerName=[Ms.Status]
PlayerType=State
DynamicVariables=1

[Ms.Rating]
Measure=NowPlaying
PlayerName=[Ms.Status]
PlayerType=Rating
DynamicVariables=1

[Ms.Repeat]
Measure=NowPlaying
PlayerName=[Ms.Status]
PlayerType=Repeat
Substitute="1":"2"
DynamicVariables=1

[Ms.Shuffle]
Measure=NowPlaying
PlayerName=[Ms.Status]
PlayerType=Shuffle
DynamicVariables=1

[Ms.Volume]
Measure=NowPlaying
PlayerName=[Ms.Status]
PlayerType=Volume
DynamicVariables=1

[Ms.SupportsPlayPause]
Measure=Calc
Formula=[Ms.Status]*[#Vb.[#PlayerName].SPP]
DynamicVariables=1

[Ms.SupportsSkipPrevious]
Measure=Calc
Formula=[Ms.Status]*[#Vb.[#PlayerName].SSP]
DynamicVariables=1

[Ms.SupportsSkipNext]
Measure=Calc
Formula=[Ms.Status]*[#Vb.[#PlayerName].SSN]
DynamicVariables=1

[Ms.SupportsSetPosition]
Measure=Calc
Formula=[Ms.Status]*[#Vb.[#PlayerName].SSP]
DynamicVariables=1

[Ms.SupportsSetVolume]
Measure=Calc
Formula=[Ms.Status]*[#Vb.[#PlayerName].SSV]
DynamicVariables=1

[Ms.SupportsToggleRepeatMode]
Measure=Calc
Formula=[Ms.Status]*[#Vb.[#PlayerName].STR]
DynamicVariables=1

[Ms.SupportsToggleShuffleActive]
Measure=Calc
Formula=[Ms.Status]*[#Vb.[#PlayerName].STS]
DynamicVariables=1

[Ms.SupportsSetRating]
Measure=Calc
Formula=[Ms.Status]*[#Vb.[#PlayerName].SSR]
DynamicVariables=1

[Ms.RatingSystem]
Measure=Calc
Formula=[Ms.Status]*[#Vb.[#PlayerName].RSY]
DynamicVariables=1
