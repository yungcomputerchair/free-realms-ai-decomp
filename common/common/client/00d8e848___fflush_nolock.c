// addr: 0x00d8e848
// name: __fflush_nolock
// subsystem: common/common/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int __fflush_nolock(void * file) */

int __cdecl __fflush_nolock(void *file)

{
  int iVar1;
  
                    /* Visual Studio CRT __fflush_nolock implementation: flushes all streams when
                       file is null, otherwise flushes the stream and commits when the commit flag
                       is set. Evidence is the library match annotation and calls to __flush,
                       __fileno, and flsall. */
  if (file == (void *)0x0) {
    iVar1 = flsall(0);
    return iVar1;
  }
  iVar1 = __flush(file);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(ushort *)((int)file + 0xc) & 0x4000) != 0) {
    iVar1 = __fileno(file);
    iVar1 = FUN_00da8416(iVar1);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}

