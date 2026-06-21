// addr: 0x0108e540
// name: FUN_0108e540
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: undefined4 FUN_0108e540(void) */

undefined4 FUN_0108e540(void)

{
  uint *puVar1;
  char cVar2;
  void *pvVar3;
  int iVar4;
  undefined4 extraout_EAX;
  undefined4 uVar5;
  undefined4 extraout_EAX_00;
  int in_ECX;
  uint uVar6;
  uint uVar7;
  void *_Memory;
  longlong lVar8;
  void *local_7c;
  int local_78;
  int local_74;
  undefined1 local_70 [4];
  void *local_6c;
  undefined *local_68;
  undefined1 local_5c [4];
  int local_58;
  undefined *local_54;
  int local_44;
  undefined *local_40;
  int local_30;
  undefined *local_2c;
  int local_1c;
  void *local_18;
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Large network/session initialization routine that allocates many helper
                       objects and initializes file/network state, but no clear class or method
                       string is present in this context. The behavior is too broad for a safe
                       specific name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0164248b;
  local_c = ExceptionList;
  pvVar3 = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffff74);
  ExceptionList = &local_c;
  _Memory = (void *)0x0;
  if (*(int *)(in_ECX + 0x3cc) != 0) {
    if ((*(int *)(in_ECX + 0x3ec) < 1) &&
       ((*(int *)(in_ECX + 0x3ec) < 0 || (*(int *)(in_ECX + 1000) == 0)))) {
      FUN_01092ab0();
      local_4 = 0;
      iVar4 = (int)local_6c - (int)local_68;
      if (local_68 == (undefined *)0x0) {
        local_68 = &DAT_01873648;
      }
      cVar2 = FUN_00f99920(local_68,iVar4);
      if (cVar2 == '\0') {
        *(undefined4 *)(in_ECX + 0x3f0) = 5;
        if (*(int **)(in_ECX + 0x3c8) != (int *)0x0) {
          (**(code **)(**(int **)(in_ECX + 0x3c8) + 4))
                    (*(undefined4 *)(in_ECX + 4),in_ECX + 0x220,0xfffffff9);
        }
      }
      else {
        *(undefined4 *)(in_ECX + 0x3f0) = 3;
      }
      local_c = (void *)0xffffffff;
      FUN_010920a0();
      ExceptionList = pvStack_14;
      return extraout_EAX;
    }
    uVar6 = *(uint *)(in_ECX + 0x3d8);
    iVar4 = UdpLibrary_UdpConnection_getQueuedByteCount(*(int *)(in_ECX + 0x238));
    if (iVar4 < (int)(uVar6 >> 1)) {
      local_7c = (void *)0x0;
      uVar5 = FUN_00702d50(*(undefined4 *)(in_ECX + 0x3d4),*(undefined4 *)(in_ECX + 0x3d8),&local_7c
                          );
      if ((char)uVar5 == '\0') {
        *(undefined4 *)(in_ECX + 0x3f0) = 5;
        if (*(int **)(in_ECX + 0x3c8) == (int *)0x0) {
          ExceptionList = local_c;
          return uVar5;
        }
        uVar5 = (**(code **)(**(int **)(in_ECX + 0x3c8) + 4))
                          (*(undefined4 *)(in_ECX + 4),in_ECX + 0x220,0xfffffffd);
        ExceptionList = local_18;
        return uVar5;
      }
      uVar5 = FUN_00f99930(*(undefined4 *)(in_ECX + 0x3d4),local_7c);
      if ((char)uVar5 == '\0') {
        *(undefined4 *)(in_ECX + 0x3f0) = 5;
        if (*(int **)(in_ECX + 0x3c8) == (int *)0x0) {
          ExceptionList = local_c;
          return uVar5;
        }
        uVar5 = (**(code **)(**(int **)(in_ECX + 0x3c8) + 4))
                          (*(undefined4 *)(in_ECX + 4),in_ECX + 0x220,0xfffffff9);
        ExceptionList = local_18;
        return uVar5;
      }
      puVar1 = (uint *)(in_ECX + 1000);
      pvVar3 = (void *)*puVar1;
      *puVar1 = *puVar1 - (int)local_7c;
      *(int *)(in_ECX + 0x3ec) =
           (*(int *)(in_ECX + 0x3ec) - ((int)local_7c >> 0x1f)) - (uint)(pvVar3 < local_7c);
    }
    uVar5 = FUN_0108d5f0();
    ExceptionList = local_c;
    return uVar5;
  }
  FUN_01093340(in_ECX + 8);
  local_4 = 1;
  local_7c = Mem_Alloc(0x68);
  local_4._0_1_ = 2;
  if (local_7c != (void *)0x0) {
    _Memory = (void *)FUN_007039b0();
  }
  local_4._0_1_ = 1;
  cVar2 = FUN_00703e10(*(undefined4 *)(in_ECX + 0x1ec),0,1);
  if (cVar2 != '\0') {
    lVar8 = FUN_00702dd0();
    *(longlong *)(in_ECX + 0x3e0) = lVar8;
    if (lVar8 != 0) {
      *(void **)(in_ECX + 0x3cc) = _Memory;
      uVar6 = (local_44 - (int)local_40) + (local_30 - (int)local_2c);
      uVar7 = uVar6 + (local_1c - (int)local_18);
      local_78 = uVar7 + (uint)lVar8;
      local_74 = (uint)CARRY4(local_44 - (int)local_40,local_30 - (int)local_2c) +
                 (uint)CARRY4(uVar6,local_1c - (int)local_18) + *(int *)(in_ECX + 0x3e4) +
                 (uint)CARRY4(uVar7,(uint)lVar8);
      FUN_010920f0(&local_78);
      FUN_00f63390(local_5c);
      local_4._0_1_ = 3;
      FUN_00f96090(local_5c);
      local_58 = local_58 - (int)local_54;
      if (local_54 == (undefined *)0x0) {
        local_54 = &DAT_01873648;
      }
      cVar2 = FUN_00f99920(local_54,local_58);
      if (cVar2 == '\0') {
LAB_0108e87e:
        *(undefined4 *)(in_ECX + 0x3f0) = 5;
        if (*(int **)(in_ECX + 0x3c8) != (int *)0x0) {
          (**(code **)(**(int **)(in_ECX + 0x3c8) + 4))
                    (*(undefined4 *)(in_ECX + 4),in_ECX + 0x220,0xfffffff9);
        }
      }
      else {
        local_44 = local_44 - (int)local_40;
        if (local_40 == (undefined *)0x0) {
          local_40 = &DAT_01873648;
        }
        cVar2 = FUN_00f99920(local_40,local_44);
        if (cVar2 == '\0') goto LAB_0108e87e;
        local_30 = local_30 - (int)local_2c;
        if (local_2c == (undefined *)0x0) {
          local_2c = &DAT_01873648;
        }
        cVar2 = FUN_00f99920(local_2c,local_30);
        if (cVar2 == '\0') goto LAB_0108e87e;
        local_6c = Mem_Alloc(0x10000);
        local_68 = (undefined *)0x10000;
        local_4._0_1_ = 4;
        FUN_0108d580((void *)(in_ECX + 0x3d0),local_70,pvVar3);
        *(undefined4 *)(in_ECX + 1000) = *(undefined4 *)(in_ECX + 0x3e0);
        *(undefined4 *)(in_ECX + 0x3ec) = *(undefined4 *)(in_ECX + 0x3e4);
        local_4._0_1_ = 3;
        FUN_0108dcc0(local_70);
      }
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_00f633b0();
      goto LAB_0108e959;
    }
  }
  if (_Memory != (void *)0x0) {
    FUN_00703a30();
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(undefined4 *)(in_ECX + 0x3f0) = 5;
  if (*(int **)(in_ECX + 0x3c8) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x3c8) + 4))
              (*(undefined4 *)(in_ECX + 4),in_ECX + 0x220,0xfffffffd);
  }
LAB_0108e959:
  local_4 = 0xffffffff;
  FUN_010921e0();
  ExceptionList = local_c;
  return extraout_EAX_00;
}

