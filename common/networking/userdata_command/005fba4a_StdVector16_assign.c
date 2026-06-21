// addr: 0x005fba4a
// name: StdVector16_assign
// subsystem: common/networking/userdata_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall StdVector16_assign(void *param_1,void *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  void *first;
  int iVar5;
  void *this;
  void *this_00;
  
                    /* Assigns one vector-like container of 16-byte elements to another, handling
                       self-assignment, capacity checks, destruction, allocation, and range copying.
                       Evidence: called from RespondPlayerMatches cloneInto for a +0xac member and
                       uses 16-byte size/copy/destroy helpers. */
  if (param_1 != param_2) {
    iVar2 = StdVector16_size_005db4ff(param_2);
    if (iVar2 == 0) {
      StdVector16_clearAndReset(param_1);
    }
    else {
      uVar3 = StdVector16_size_005db4ff(param_2);
      uVar4 = StdVector16_size_005db4ff(param_1);
      if (uVar4 < uVar3) {
        uVar3 = StdVector16_size_005db4ff(param_2);
        uVar4 = StdVector16_size(param_1);
        if (uVar4 < uVar3) {
          if (*(void **)((int)param_1 + 4) != (void *)0x0) {
            StdVector16_destroyRangeThunk
                      (this_00,*(void **)((int)param_1 + 4),*(void **)((int)param_1 + 8),param_1);
                    /* WARNING: Subroutine does not return */
            _free(*(void **)((int)param_1 + 4));
          }
          iVar2 = StdVector16_size_005db4ff(param_2);
          cVar1 = FUN_005ee56f(iVar2);
          if (cVar1 == '\0') {
            return param_1;
          }
          iVar2 = StdVector16_uninitializedCopyRange
                            (*(undefined4 *)((int)param_2 + 4),*(undefined4 *)((int)param_2 + 8),
                             *(undefined4 *)((int)param_1 + 4),param_1);
        }
        else {
          iVar2 = *(int *)((int)param_2 + 4);
          iVar5 = StdVector16_size_005db4ff(param_1);
          iVar5 = iVar5 * 0x10 + iVar2;
          StdVector16_copyAssignRange(iVar2,iVar5,*(undefined4 *)((int)param_1 + 4));
          iVar2 = StdVector16_uninitializedCopyRange
                            (iVar5,*(undefined4 *)((int)param_2 + 8),
                             *(undefined4 *)((int)param_1 + 8),param_1);
        }
      }
      else {
        first = (void *)StdVector16_copyAssignRange
                                  (*(undefined4 *)((int)param_2 + 4),
                                   *(undefined4 *)((int)param_2 + 8),
                                   *(undefined4 *)((int)param_1 + 4));
        StdVector16_destroyRangeThunk(this,first,*(void **)((int)param_1 + 8),param_1);
        iVar2 = StdVector16_size_005db4ff(param_2);
        iVar2 = iVar2 * 0x10 + *(int *)((int)param_1 + 4);
      }
      *(int *)((int)param_1 + 8) = iVar2;
    }
  }
  return param_1;
}

