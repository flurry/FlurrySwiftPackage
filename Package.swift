// swift-tools-version:5.6
// The swift-tools-version declares the minimum version of Swift required to build this package.
import PackageDescription

let package = Package(
    name: "Flurry",
    platforms: [
        .iOS(.v10),
        .tvOS(.v10),
        .watchOS(.v3)
    ],
    products: [
        // Products define the executables and libraries produced by a package, and make them visible to other packages.
        .library(
            name: "FlurryLite",
            targets: ["Flurry"]
        ),
        .library(
            name: "FlurryMessaging",
            targets: ["FlurryMessaging"]
        ),
        .library(
            name: "FlurryConfig",
            targets: ["FlurryConfig"]
        ),
    ],
    dependencies: [
        // Dependencies declare other packages that this package depends on.
        // .package(url: /* package url */, from: "1.0.0"),
    ],
    targets: [
        // Targets are the basic building blocks of a package. A target can define a module or a test suite.
        // Targets can depend on other targets in this package, and on products in packages which this package depends on.
        .binaryTarget(
            name: "Flurry",
            path: "artifacts/Flurry.xcframework"
        ),
        .binaryTarget(
            name: "FlurryMessaging",
            path: "artifacts/FlurryMessaging.xcframework"
        ),
        .binaryTarget(
            name: "FlurryConfig",
            path: "artifacts/FlurryConfig.xcframework"
        ),
    ]
)
