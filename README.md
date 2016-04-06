# List app; new name TBD

[![No Maintenance Intended](http://unmaintained.tech/badge.svg)](http://unmaintained.tech/)

Since [Jesse Grosjean generously decided to release the original source code for TaskPaper-iOS](http://blog.hogbaysoftware.com/post/72672157477/taskpaper-for-ios-source-code), I'd like to take the code and see if I can modernize the app a bit and make something that works even better (fixing the sync issues mentioned in the original README) and feels at home on iOS 7.

In the immediate term, my plan is to get acquainted with the codebase, especially the UI and data model/sync areas.

Over the next couple months, I then hope to:

* target iOS 7 exclusively
* convert to a more modern, iOS 7 style UI
* replace sync code with the latest Dropbox SDK and fix the sync issue mentioned in the README
* add bug/crash reporting
* come up with a new name for the app and repo, and release the app

I plan to further modernize ObjC style and usage as I touch each file during dev.

# Original README

The following is the README included with jessegrosjean/NOTTaskPaperForIOS:

> This is the source code for the original TaskPaper for iOS.

> It contains the source code for the original TaskPaper for iOS app. I no longer have time to develop this app, but there seem to be other developers who'd like a crack at the code.

> It's fairly old and needs some work in many places. If you really want to spend some time on it I would recommend taking away the custom sync lib and replacing with a Dropbox or iCloud based solution as a start. The existing sync has some hard to track down bugs.

> IMPORTANT

> You are free to use this code in any way that you see fit. But please DO NOT name your app "TaskPaper" or anything that can be mistaken for "TaskPaper". I am still developing TaskPaper for Mac, and someday (distant remote possibility) I may even try to release a TaskPaper for iOS again. I don't want people to be confused and think any apps derived from this code are made by Hog Bay Software.

> I do encorage you to advertise the fact that your derived app works with 'taskpaper' files, etc in the app description. Just not directly in app name.

> Thanks,
> Jesse Grosjean - Jan 8, 2014
