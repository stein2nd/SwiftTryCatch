import XCTest
@testable import SwiftTryCatch

final class SwiftTryCatchTests: XCTestCase {
    func testExample() {
        // This is an example of a functional test case.
        // Use XCTAssert and related functions to verify your tests produce the correct
        // results.
        XCTAssertEqual(SwiftTryCatch().text, "Hello, World!")
    }

    static var allTests = [
        ("testExample", testExample),
    ]
}
