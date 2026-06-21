// addr: 0x00d8e88a
// name: flsall
// subsystem: common/common/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Setting prototype: int flsall(int flushMode_) */

int __cdecl flsall(int flushMode_)

{
  int *piVar1;
  void *file;
  int iVar2;
  int iVar3;
  undefined4 local_28;
  undefined4 local_20;
  
                    /* Visual Studio CRT _flsall implementation that locks the stdio table, iterates
                       open FILE entries, flushes them depending on mode, and returns a count or
                       error status. Evidence is the library match annotation and calls to
                       __fflush_nolock under __lock(1). */
  local_20 = 0;
  local_28 = 0;
  __lock(1);
  for (iVar3 = 0; iVar3 < DAT_01cc00c0; iVar3 = iVar3 + 1) {
    piVar1 = (int *)(DAT_01cbf0b0 + iVar3 * 4);
    if ((*piVar1 != 0) && (iVar2 = *piVar1, (*(byte *)(iVar2 + 0xc) & 0x83) != 0)) {
      FUN_00d8e389(iVar3,iVar2);
      file = *(void **)(DAT_01cbf0b0 + iVar3 * 4);
      if ((*(uint *)((int)file + 0xc) & 0x83) != 0) {
        if (flushMode_ == 1) {
          iVar2 = __fflush_nolock(file);
          if (iVar2 != -1) {
            local_20 = local_20 + 1;
          }
        }
        else if ((flushMode_ == 0) && ((*(uint *)((int)file + 0xc) & 2) != 0)) {
          iVar2 = __fflush_nolock(file);
          if (iVar2 == -1) {
            local_28 = -1;
          }
        }
      }
      CRT_unlock_stream_entry_thunk();
    }
  }
  CRT_unlock_stdio_table();
  if (flushMode_ != 1) {
    local_20 = local_28;
  }
  return local_20;
}

