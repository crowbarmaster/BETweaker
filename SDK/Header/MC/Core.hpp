// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

namespace Core {

#define AFTER_EXTRA
// Add Member There
class IFileSystem;
enum FileBufferingMode;
enum LevelStorageState;
enum DirectoryIterationFlags;
template <typename T0, int i1>
class StackString {
public:
    StackString() = delete;
    StackString(StackString const&) = delete;
    StackString(StackString const&&) = delete;
};
template <typename T0, typename T1>
class Subject {
public:
    Subject() = delete;
    Subject(Subject const&) = delete;
    Subject(Subject const&&) = delete;
};
class FileStorageArea {
public:
    FileStorageArea() = delete;
    FileStorageArea(FileStorageArea const&) = delete;
    FileStorageArea(FileStorageArea const&&) = delete;
};
class StringSpan {
public:
    StringSpan() = delete;
    StringSpan(StringSpan const&) = delete;
    StringSpan(StringSpan const&&) = delete;
};
class FileOpenMode {
public:
    FileOpenMode() = delete;
    FileOpenMode(FileOpenMode const&) = delete;
    FileOpenMode(FileOpenMode const&&) = delete;
};
class PathPart {
public:
    std::string mUtf8StdString;
};

class Path {
public:
    PathPart mPath;
    Path(string a1) {
        mPath.mUtf8StdString = a1;
    }
	
};

template <typename T> 
class PathBuffer {
    T value;
public:
    T& get() {
		return value;
    }
    operator T& () noexcept { return value; }
    operator T const& () const noexcept { return value; }
};

struct LevelStorageResult {
    LevelStorageResult() = delete;
    LevelStorageResult(LevelStorageResult const&) = delete;
    LevelStorageResult(LevelStorageResult const&&) = delete;
};
class Result {
public:
    Result() = delete;
    Result(Result const&) = delete;
    Result(Result const&&) = delete;
};
class FileSystemImpl {
public:
    FileSystemImpl() = delete;
    FileSystemImpl(FileSystemImpl const&) = delete;
    FileSystemImpl(FileSystemImpl const&&) = delete;
};
class SingleThreadedLock {
public:
    SingleThreadedLock() = delete;
    SingleThreadedLock(SingleThreadedLock const&) = delete;
    SingleThreadedLock(SingleThreadedLock const&&) = delete;
};

class FilePathManager {
public:
    FilePathManager() = delete;
    FilePathManager(FilePathManager const&) = delete;
    FilePathManager(FilePathManager const&&) = delete;
};
class Profile {
struct FileCounters {
    FileCounters() = delete;
    FileCounters(FileCounters const&) = delete;
    FileCounters(FileCounters const&&) = delete;
};
Profile() = delete;
Profile(Profile const&) = delete;
Profile(Profile const&&) = delete;
};
enum FileAccessType;

#undef AFTER_EXTRA
    MCAPI extern char const * RESULT_FAILED_MESSAGE;
    MCAPI extern char const * RESULT_NOT_IMPLEMENTED_MESSAGE;
    MCAPI extern char const * RESULT_SUCCEEDED_MESSAGE;
    MCAPI unsigned __int64 operator&(enum Core::DirectoryIterationFlags, enum Core::DirectoryIterationFlags);
    MCAPI enum Core::DirectoryIterationFlags operator|(enum Core::DirectoryIterationFlags, enum Core::DirectoryIterationFlags);
    MCAPI extern class std::shared_ptr<class Core::FileStorageArea> sRootStorageArea;
    MCAPI bool starts_with(class Core::StringSpan, class Core::StringSpan);
    MCAPI class Core::Result transferDirectory(class Core::FileSystemImpl *, class Core::Path const &, class Core::FileSystemImpl *, class Core::Path const &, class std::function<class Core::Result (class Core::Path const &, class Core::Path const &)> const &);

};