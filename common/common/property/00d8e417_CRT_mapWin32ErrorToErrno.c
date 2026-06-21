// addr: 0x00d8e417
// name: CRT_mapWin32ErrorToErrno
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int CRT_mapWin32ErrorToErrno(int win32Error) */

int __cdecl CRT_mapWin32ErrorToErrno(int win32Error)

{
  uint uVar1;
  
                    /* Maps operating-system error codes through a CRT lookup table and range
                       fallbacks to errno values. Evidence: table scan at DAT_01b83eb0 and fallback
                       returns such as 13, 8, and 14 depending on error ranges. */
  uVar1 = 0;
  do {
    if (win32Error == (&DAT_01b83eb0)[uVar1 * 2]) {
      return *(int *)(uVar1 * 8 + 0x1b83eb4);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x2d);
  if (win32Error - 0x13U < 0x12) {
    return 0xd;
  }
  return (-(uint)(0xe < win32Error - 0xbcU) & 0xe) + 8;
}

