// addr: 0x00d8e34d
// name: CRT_lockFile
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CRT_lockFile(uint fileOrStream) */

void __cdecl CRT_lockFile(uint fileOrStream)

{
                    /* Locks either a CRT file slot or a per-stream critical section and marks
                       CRT-owned streams as locked. Evidence: range check against the CRT stream
                       table, call to __lock for indexed streams, otherwise
                       EnterCriticalSection(stream+0x20). */
  if ((0x1b83c2f < fileOrStream) && (fileOrStream < 0x1b83e91)) {
    __lock(((int)(fileOrStream + 0xfe47c3d0) >> 5) + 0x10);
    *(uint *)(fileOrStream + 0xc) = *(uint *)(fileOrStream + 0xc) | 0x8000;
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(fileOrStream + 0x20));
  return;
}

