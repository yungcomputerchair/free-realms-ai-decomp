// addr: 0x014c7740
// name: StdVectorInt_assignFromVector
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int StdVectorInt_assignFromVector(int dst, int src) */

int __thiscall StdVectorInt_assignFromVector(void *this,int dst,int src)

{
  void *_Memory;
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
                    /* Assigns one contiguous 4-byte-element vector to another, reusing capacity
                       when possible, freeing and reallocating when necessary. Evidence: cloneInto
                       for LobbyCommand_ChangeBulkStatus and LobbyCommand_BulkJoin call this for
                       integer/status vectors. */
  if (this == (void *)dst) {
    return (int)this;
  }
  iVar2 = *(int *)(dst + 4);
  if (iVar2 != 0) {
    uVar5 = *(int *)(dst + 8) - iVar2 >> 2;
    if (uVar5 != 0) {
      _Memory = *(void **)((int)this + 4);
      if (_Memory == (void *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(int *)((int)this + 8) - (int)_Memory >> 2;
      }
      if (uVar5 <= uVar3) {
        Std_copy_uint32Range_A(iVar2,*(int *)(dst + 8),_Memory);
        if (*(int *)(dst + 4) == 0) {
          *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 4);
          return (int)this;
        }
        *(int *)((int)this + 8) =
             *(int *)((int)this + 4) + (*(int *)(dst + 8) - *(int *)(dst + 4) >> 2) * 4;
        return (int)this;
      }
      if (_Memory == (void *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(int *)((int)this + 0xc) - (int)_Memory >> 2;
      }
      if (uVar3 < uVar5) {
        if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        if (*(int *)(dst + 4) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(dst + 8) - *(int *)(dst + 4) >> 2;
        }
        cVar1 = FUN_014c7490(iVar2);
        if (cVar1 == '\0') {
          return (int)this;
        }
        iVar2 = LobbyCommand_ChangeBulkStatus_vectorAssignCopyConstruct
                          (*(int *)(dst + 4),*(int *)(dst + 8),*(int *)((int)this + 4));
        *(int *)((int)this + 8) = iVar2;
        return (int)this;
      }
      if (_Memory == (void *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)((int)this + 8) - (int)_Memory >> 2;
      }
      iVar4 = iVar2 + iVar4 * 4;
      Std_copy_uint32Range_A(iVar2,iVar4,_Memory);
      iVar2 = LobbyCommand_ChangeBulkStatus_vectorAssignCopyConstruct
                        (iVar4,*(int *)(dst + 8),*(int *)((int)this + 8));
      *(int *)((int)this + 8) = iVar2;
      return (int)this;
    }
  }
  FUN_014c7180();
  return (int)this;
}

