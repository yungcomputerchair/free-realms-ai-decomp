// addr: 0x00a57d50
// name: FUN_00a57d50
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_00a57d50(void * this, int arg_, int repeatCount_) */

void __thiscall FUN_00a57d50(void *this,int arg_,int repeatCount_)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  void *list;
  int *piVar4;
  undefined4 *puVar5;
  int local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Resets two lists, repeatedly looks up items through a manager, updates active
                       item state, and appends small nodes containing the resolved id to a list. No
                       class identity is visible. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_015b6e7b;
  local_c = ExceptionList;
  list = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffd4);
  ExceptionList = &local_c;
  removeFirstQueuedNodeAndReleasePayload(this,(void *)((int)this + 0x434),list);
  removeFirstQueuedNodeAndReleasePayload(this,(undefined4 *)((int)this + 0x428),list);
  iVar1 = *(int *)(*(int *)((int)this + 4) + 0xe8);
  piVar2 = *(int **)(iVar1 + 4);
  if (repeatCount_ != 0) {
    local_1c = repeatCount_;
    do {
      repeatCount_ = 0;
      cVar3 = FUN_00cac170(iVar1,arg_,&repeatCount_);
      if ((cVar3 != '\0') && (piVar4 = (int *)(**(code **)(*piVar2 + 0x10))(), piVar4 != (int *)0x0)
         ) {
        if (((byte)*(ushort *)(piVar4 + 4) >> 1 & 1) != 0) {
          *(ushort *)(piVar4 + 4) = *(ushort *)(piVar4 + 4) & 0xfffd;
          if (piVar4[1] != 0) {
            FUN_00735a30();
          }
          (**(code **)(*piVar4 + 0x3c))();
        }
        puVar5 = Mem_Alloc(0xc);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5[2] = repeatCount_;
        }
        uStack_4 = 0xffffffff;
        *puVar5 = *(undefined4 *)((int)this + 0x42c);
        if (*(int *)((int)this + 0x42c) == 0) {
          *(undefined4 *)((int)this + 0x428) = puVar5;
        }
        else {
          *(undefined4 **)(*(int *)((int)this + 0x42c) + 4) = puVar5;
        }
        *(int *)((int)this + 0x430) = *(int *)((int)this + 0x430) + 1;
        *(undefined4 **)((int)this + 0x42c) = puVar5;
      }
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  ExceptionList = local_c;
  return;
}

