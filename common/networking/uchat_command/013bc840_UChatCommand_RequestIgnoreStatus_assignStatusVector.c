// addr: 0x013bc840
// name: UChatCommand_RequestIgnoreStatus_assignStatusVector
// subsystem: common/networking/uchat_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int UChatCommand_RequestIgnoreStatus_assignStatusVector(void * thisVector,
   void * sourceVector) */

int __thiscall
UChatCommand_RequestIgnoreStatus_assignStatusVector(void *this,void *thisVector,void *sourceVector)

{
  void *_Memory;
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
                    /* Assigns/copies the RequestIgnoreStatus int-vector payload, reallocating as
                       needed and copying 4-byte elements. */
  if (this == thisVector) {
    return (int)this;
  }
  iVar3 = *(int *)((int)thisVector + 4);
  if (iVar3 != 0) {
    uVar6 = *(int *)((int)thisVector + 8) - iVar3 >> 2;
    if (uVar6 != 0) {
      _Memory = *(void **)((int)this + 4);
      if (_Memory == (void *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(int *)((int)this + 8) - (int)_Memory >> 2;
      }
      if (uVar6 <= uVar4) {
        UChatCommand_RequestIgnoreStatus_copyIntRangeToBuffer
                  (iVar3,*(int *)((int)thisVector + 8),_Memory);
        if (*(int *)((int)thisVector + 4) == 0) {
          *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 4);
          return (int)this;
        }
        *(int *)((int)this + 8) =
             *(int *)((int)this + 4) +
             (*(int *)((int)thisVector + 8) - *(int *)((int)thisVector + 4) >> 2) * 4;
        return (int)this;
      }
      if (_Memory == (void *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(int *)((int)this + 0xc) - (int)_Memory >> 2;
      }
      if (uVar4 < uVar6) {
        if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        if (*(int *)((int)thisVector + 4) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)((int)thisVector + 8) - *(int *)((int)thisVector + 4) >> 2;
        }
        cVar1 = FUN_013bc590(iVar3);
        if (cVar1 == '\0') {
          return (int)this;
        }
        uVar2 = UChatCommand_RequestIgnoreStatus_copyIntRange
                          (*(undefined4 *)((int)thisVector + 4),*(undefined4 *)((int)thisVector + 8)
                           ,*(undefined4 *)((int)this + 4));
        *(undefined4 *)((int)this + 8) = uVar2;
        return (int)this;
      }
      if (_Memory == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)((int)this + 8) - (int)_Memory >> 2;
      }
      iVar5 = iVar3 + iVar5 * 4;
      UChatCommand_RequestIgnoreStatus_copyIntRangeToBuffer(iVar3,iVar5,_Memory);
      uVar2 = UChatCommand_RequestIgnoreStatus_copyIntRange
                        (iVar5,*(undefined4 *)((int)thisVector + 8),*(undefined4 *)((int)this + 8));
      *(undefined4 *)((int)this + 8) = uVar2;
      return (int)this;
    }
  }
  FUN_013bc0e0();
  return (int)this;
}

