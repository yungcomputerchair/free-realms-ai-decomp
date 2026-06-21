// addr: 0x010de9f0
// name: FUN_010de9f0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_010de9f0(void * connection, void * data, int byteCount_, int arg4_,
   void * arg5) */

void __thiscall
FUN_010de9f0(void *this,void *connection,void *data,int byteCount_,int arg4_,void *arg5)

{
  uint *puVar1;
  undefined1 **ppuVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  undefined1 **ppuVar8;
  undefined4 extraout_ECX;
  void *extraout_ECX_00;
  void *pvStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  undefined1 *local_1c;
  int iStack_18;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Queues or sends UDP payload data while updating byte/packet counters,
                       enforcing throttle limits, and appending queued send records when immediate
                       send is not possible. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0164c57b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_1c = (undefined1 *)((int)this + 0x2a4);
  FUN_010da6d0();
  local_4 = 0;
  FUN_010da6d0();
  local_10 = *(undefined4 *)((int)this + 0x28c);
  uVar4 = *(undefined4 *)((int)this + 0x288);
  FUN_010da6e0();
  *(undefined4 *)((int)this + 0x268) = uVar4;
  puVar1 = (uint *)((int)this + 0x2c0);
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + (int)data;
  *(undefined4 *)((int)this + 0x26c) = local_10;
  *(int *)((int)this + 0x2c4) =
       *(int *)((int)this + 0x2c4) + ((int)data >> 0x1f) + (uint)CARRY4(uVar3,(uint)data);
  puVar1 = (uint *)((int)this + 0x2c8);
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + 1;
  local_4 = 0xffffffff;
  *(int *)((int)this + 0x2cc) = *(int *)((int)this + 0x2cc) + (uint)(0xfffffffe < uVar3);
  FUN_010da6e0();
  if ((*(int *)((int)this + 0x1c4) == 0) && (*(int *)((int)this + 0x1d0) == 0)) {
    arg4_ = (int)&uStack_38;
    piStack_3c = &byteCount_;
    pvStack_40 = (void *)0x10deabe;
    FUN_010da860();
    piStack_3c = data;
    pvStack_40 = connection;
    FUN_010dda60();
    ExceptionList = local_c;
    return;
  }
  FUN_010da6d0();
  local_4 = 1;
  if ((*(int *)((int)this + 0x1c8) < 1) ||
     (*(int *)((int)this + 0x4e0) + (int)data <= *(int *)((int)this + 0x1c8))) {
    local_1c = (undefined1 *)&uStack_38;
    piStack_3c = &byteCount_;
    pvStack_40 = (void *)0x10deb19;
    uStack_38 = extraout_ECX;
    FUN_010da860();
    piStack_3c = (int *)0x10deb20;
    piVar6 = (int *)FUN_010ddc70();
    if (piVar6 != (int *)0x0) {
      if ((0 < *(int *)((int)this + 0x1cc)) &&
         (*(int *)((int)this + 0x1cc) < piVar6[0x1c] + (int)data)) {
        (**(code **)(*piVar6 + 4))();
        goto LAB_010dec5f;
      }
      piVar6[0x1c] = piVar6[0x1c] + (int)data;
      (**(code **)(*piVar6 + 4))();
    }
    *(int *)((int)this + 0x4e0) = *(int *)((int)this + 0x4e0) + (int)data;
    uStack_38 = 0x10deb5e;
    local_1c = Mem_Alloc(0x20);
    local_4._0_1_ = 2;
    if (local_1c == (undefined1 *)0x0) {
      iVar7 = 0;
    }
    else {
      FUN_010da6d0();
      local_10 = *(undefined4 *)((int)this + 0x26c);
      uVar4 = *(undefined4 *)((int)this + 0x268);
      FUN_010da6e0();
      piStack_3c = (int *)arg4_;
      arg4_ = (int)&pvStack_40;
      pvStack_40 = extraout_ECX_00;
      uStack_38 = uVar4;
      FUN_010da860(&byteCount_);
      iVar7 = FUN_010de260(connection,data);
    }
    *(undefined4 *)(iVar7 + *(int *)((int)this + 0x518)) = *(undefined4 *)((int)this + 0x514);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (*(int *)((int)this + 0x514) == 0) {
      *(int *)((int)this + 0x510) = iVar7;
    }
    else {
      *(int *)(*(int *)((int)this + 0x514) + 4 + *(int *)((int)this + 0x518)) = iVar7;
    }
    *(int *)((int)this + 0x514) = iVar7;
    *(int *)((int)this + 0x51c) = *(int *)((int)this + 0x51c) + 1;
    if (*(int *)((int)this + 0x51c) == 1) {
      FUN_010da6d0();
      uVar3 = *(uint *)((int)this + 0x268);
      iVar7 = *(int *)((int)this + 0x26c);
      FUN_010da6e0();
      uVar5 = *(uint *)((int)this + 0x1d0);
      local_1c = (undefined1 *)(uVar5 + uVar3);
      iStack_18 = ((int)uVar5 >> 0x1f) + iVar7 + (uint)CARRY4(uVar5,uVar3);
      ppuVar2 = (undefined1 **)((int)this + 0x4f0);
      if ((*(int *)((int)this + 0x4f4) < iStack_18) ||
         ((ppuVar8 = ppuVar2, *(int *)((int)this + 0x4f4) <= iStack_18 && (*ppuVar2 <= local_1c))))
      {
        ppuVar8 = &local_1c;
      }
      *ppuVar2 = *ppuVar8;
      *(undefined1 **)((int)this + 0x4f4) = ppuVar8[1];
    }
  }
LAB_010dec5f:
  local_4 = 0xffffffff;
  FUN_010da6e0();
  ExceptionList = local_c;
  return;
}

