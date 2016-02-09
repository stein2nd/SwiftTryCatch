SwiftTryCatch
=============

Adds try/catch for Objective C exceptions in Swift 2.x as a Carthage module.

Simple wrapper built around Objective-C `@try`/`@catch`/`@finally`.

_Forked from https://github.com/ravero/SwiftTryCatch and added OS X, tvOS and watchOS targets. Initial version is https://github.com/williamFalcon/SwiftTryCatch._

##Usage

### Install via Carthage

Add this repro to your Cartfile per usual and `carthage update` drag to include, etc.
(see https://github.com/Carthage/Carthage).

### Use

    SwiftTryCatch.tryBlock({
             // try something
         }, catchBlock: { (error) in
             println("\(error.description)")
         }, finallyBlock: {
             // close resources
    })

