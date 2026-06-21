// addr: 0x0126dad0
// name: ThreadLocalObject_getCurrentValue
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ThreadLocalObject_getCurrentValue(void * self) */

void * __fastcall ThreadLocalObject_getCurrentValue(void *self)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  undefined *local_c;
  int local_8;
  int local_4;
  
                    /* Looks up a thread-local/list entry for self, verifies it belongs to the
                       current thread, and returns the value at entry+0x10. It returns null when no
                       current-thread entry is active. */
  local_c = &DAT_01cbdbe8;
  FUN_00f9bf20(&local_8,&local_c);
  iVar1 = *(int *)((int)self + 8);
  if ((local_8 == 0) || (local_8 != (int)self + 4)) {
    FUN_00d83c2d();
  }
  if (local_4 != iVar1) {
    if (local_8 == 0) {
      FUN_00d83c2d();
    }
    if (local_4 == *(int *)(local_8 + 4)) {
      FUN_00d83c2d();
    }
    DVar2 = FUN_01230d60();
    DVar3 = GetCurrentThreadId();
    if (DVar2 == DVar3) {
      if (local_4 == *(int *)(local_8 + 4)) {
        FUN_00d83c2d();
      }
      return *(void **)(local_4 + 0x10);
    }
  }
  return (void *)0x0;
}

