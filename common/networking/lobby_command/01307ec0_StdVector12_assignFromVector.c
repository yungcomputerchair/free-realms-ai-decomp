// addr: 0x01307ec0
// name: StdVector12_assignFromVector
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int StdVector12_assignFromVector(int dst, int src) */

int __thiscall StdVector12_assignFromVector(void *this,int dst,int src)

{
  void *_Memory;
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  undefined4 extraout_EAX;
  int iVar6;
  uint uVar7;
  void *pvVar8;
  void *unaff_EDI;
  
                    /* Assigns a vector of 12-byte records from another vector, reusing capacity
                       when possible or reallocating and copying the range. Evidence: cloneInto for
                       LobbyCommand_UpdateTournament and LobbyCommand_DisplayStats use it for their
                       0xc-byte entry vectors. */
  iVar4 = dst;
  if (this == (void *)dst) {
    return (int)this;
  }
  pvVar8 = *(void **)(dst + 4);
  if (pvVar8 != (void *)0x0) {
    iVar6 = *(int *)(dst + 8) - (int)pvVar8;
    iVar1 = iVar6 >> 0x1f;
    iVar6 = iVar6 / 0xc + iVar1;
    uVar7 = iVar6 - iVar1;
    if (iVar6 != iVar1) {
      _Memory = *(void **)((int)this + 4);
      if (_Memory == (void *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = (*(int *)((int)this + 8) - (int)_Memory) / 0xc;
      }
      if (uVar7 <= uVar3) {
        dst = dst & 0xffffff00;
        Std_copy_12byteRecords(pvVar8,*(undefined4 *)(iVar4 + 8),_Memory,dst,dst,dst);
        if (*(int *)(iVar4 + 4) == 0) {
          *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 4);
          return (int)this;
        }
        *(int *)((int)this + 8) =
             *(int *)((int)this + 4) + ((*(int *)(iVar4 + 8) - *(int *)(iVar4 + 4)) / 0xc) * 0xc;
        return (int)this;
      }
      if (_Memory == (void *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = (*(int *)((int)this + 0xc) - (int)_Memory) / 0xc;
      }
      if (uVar3 < uVar7) {
        if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        iVar4 = Vector12_size((void *)dst);
        cVar2 = FUN_01307aa0(iVar4);
        if (cVar2 == '\0') {
          return (int)this;
        }
        pvVar8 = *(void **)((int)this + 4);
        pvVar5 = *(void **)(dst + 4);
      }
      else {
        iVar4 = Vector12_size(this);
        pvVar5 = (void *)((int)pvVar8 + iVar4 * 0xc);
        StdVector12_copyRange(pvVar8,pvVar5,_Memory);
        pvVar8 = *(void **)((int)this + 8);
      }
      StdVector12_uninitializedCopyRange((int)pvVar5,*(void **)(dst + 8),pvVar8,unaff_EDI);
      *(undefined4 *)((int)this + 8) = extraout_EAX;
      return (int)this;
    }
  }
  FUN_01306cd0();
  return (int)this;
}

