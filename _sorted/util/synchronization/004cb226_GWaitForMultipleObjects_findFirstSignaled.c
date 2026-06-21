// addr: 0x004cb226
// name: GWaitForMultipleObjects_findFirstSignaled
// subsystem: common/util/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint GWaitForMultipleObjects_findFirstSignaled(int objectArray_, uint
   objectCount_) */

uint __cdecl GWaitForMultipleObjects_findFirstSignaled(int objectArray_,uint objectCount_)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  
                    /* Scans an array of synchronization objects, obtains each object's
                       synchronization state, tests vfunc +0x1c, and invokes vfunc +0x20 before
                       returning the first signaled index. Returns 0xffffffff if none are signaled.
                        */
  uVar3 = 0;
  if (objectCount_ != 0) {
    do {
      piVar2 = (int *)(**(code **)(**(int **)(objectArray_ + uVar3 * 4) + 0x1c))();
      cVar1 = (**(code **)(*piVar2 + 0x1c))();
      if (cVar1 != '\0') {
        (**(code **)(*piVar2 + 0x20))();
        return uVar3;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < objectCount_);
  }
  return 0xffffffff;
}

