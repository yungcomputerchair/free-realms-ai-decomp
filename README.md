# Free Realms — AI-Decompiled Client Source Tree

This tree is a **reverse-engineering artifact**: readable pseudo-C recovered from the
retail `FreeRealms.exe` client via Ghidra. It is **not** original source code. It is a
best-effort reconstruction produced by an automated decompilation + analysis pipeline,
intended for study and re-implementation reference.

## What's here

- One `.c` file per **first-party** function (`<addr>_<Name>.c`), containing the live
  Ghidra decompilation with recovered names, prototypes, and analyst comments.
- The directory hierarchy **mirrors the source-path structure embedded in the binary's
  debug strings** (e.g. `common/common/property/`, `common/networking/lobby_command/`,
  `common/rules/game/`). These paths come from `__FILE__` assert strings compiled into
  the binary.

## How a function is placed

1. **Precise**: if a function references a specific `*.cpp` path in an assert string,
   it is filed under that file's directory (always under `common`). The originating file
   is noted in the header comment (`// source (binary assert): ...`). (~940 functions.)
2. **Classified**: otherwise it is filed under its analyzed subsystem under `_sorted`,
   which itself was derived to match the binary's debug-string directory layout.
3. **Unsorted**: functions that could not be confidently classified into a subsystem.
   Functions that had some semantic hints went under `_unsorted/review` for further review.
   Other functions went under `_unsorted/misc`.

## Scope & caveats

- **First-party only.** Third-party/library code (STL/CRT, Bullet Physics, Granny,
  Scaleform/GFx, SoeUtil, the T4 macro runtime, pugixml, zlib, fonts, crypto, etc.) is
  intentionally **excluded**.
- Names/prototypes are recovered, not original. Unnamed functions keep `FUN_<addr>`.
- File granularity is per-function, not per–translation-unit: a real `Foo.cpp` is not
  reconstructed as a single file (we generally cannot recover which functions shared a
  `.cpp`). Directories, not files, reflect the original module boundaries.
- Decompiler artifacts (`undefinedN` types, `__thiscall`, compiler-injected helpers,
  `WARNING:` banners) are preserved as-emitted by Ghidra.

## Future work

- Lots of unclassified functions remain in `_unsorted/` buckets.
- There are no custom types or data structures yet.
- The agents didn't seem to name the labels in the data sections; those could be given appropriate names and types.
- Although the code is a lot more readable than raw Ghidra output, it could use some tune-up.
