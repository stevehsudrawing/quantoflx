; Special thanks to tjhrulz

[Rainmeter]
Update=1000

[Variables]
Ac.Play_or_Pause=[!CommandMeasure "Ms.Status" "PlayPause"][!Update][!Redraw]
Ac.Next=[!CommandMeasure "Ms.Status" "Next"][!Update][!Redraw]
Ac.Previous=[!CommandMeasure "Ms.Status" "Previous"][!Update][!Redraw]
Ac.Shuffle=[!CommandMeasure "Ms.Status" "Shuffle"][!Update][!Redraw]
Ac.Repeat=[!CommandMeasure "Ms.Status" "Repeat"][!Update][!Redraw]
Ac.SetRating_0=[!CommandMeasure "Ms.Status" "SetRating 0"][!Update][!Redraw]
Ac.SetRating_1=[!CommandMeasure "Ms.Status" "SetRating 1"][!Update][!Redraw]
Ac.SetRating_2=[!CommandMeasure "Ms.Status" "SetRating 2"][!Update][!Redraw]
Ac.SetRating_3=[!CommandMeasure "Ms.Status" "SetRating 3"][!Update][!Redraw]
Ac.SetRating_4=[!CommandMeasure "Ms.Status" "SetRating 4"][!Update][!Redraw]
Ac.SetRating_5=[!CommandMeasure "Ms.Status" "SetRating 5"][!Update][!Redraw]
Ac.ToggleThumbsUp=[!CommandMeasure "Ms.Status" "ToggleThumbsUp"][!Update][!Redraw]
Ac.ToggleThumbsDown=[!CommandMeasure "Ms.Status" "ToggleThumbsDown"][!Update][!Redraw]

[Ms.Status]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Status
DynamicVariables=1

[Ms.Player]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Player
DynamicVariables=1

[Ms.Title]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Title
DynamicVariables=1

[Ms.Artist]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Artist
DynamicVariables=1

[Ms.Album]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Album
DynamicVariables=1

[Ms.Cover]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Cover
DynamicVariables=1

[Ms.Duration]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Duration
DynamicVariables=1

[Ms.Position]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Position
DynamicVariables=1

[Ms.Progress]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Progress
DynamicVariables=1
MaxValue=100
MinValue=0

[Ms.State]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=State
DynamicVariables=1

[Ms.Rating]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Rating
DynamicVariables=1

[Ms.Repeat]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Repeat
DynamicVariables=1

[Ms.Shuffle]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Shuffle
DynamicVariables=1

[Ms.Volume]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Volume
DynamicVariables=1

[Ms.SupportsPlayPause]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=SupportsPlayPause
DynamicVariables=1

[Ms.SupportsSkipPrevious]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=SupportsSkipPrevious
DynamicVariables=1

[Ms.SupportsSkipNext]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=SupportsSkipNext
DynamicVariables=1

[Ms.SupportsSetPosition]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=SupportsSetPosition
DynamicVariables=1

[Ms.SupportsSetVolume]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=SupportsSetVolume
DynamicVariables=1

[Ms.SupportsToggleRepeatMode]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=SupportsToggleRepeatMode
DynamicVariables=1

[Ms.SupportsToggleShuffleActive]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=SupportsToggleShuffleActive
DynamicVariables=1

[Ms.SupportsSetRating]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=SupportsSetRating
DynamicVariables=1

[Ms.RatingSystem]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=RatingSystem
Substitute="SCALE":"3","LIKE_DISLIKE":"2","LIKE":"1","NONE":"0"
DynamicVariables=1
