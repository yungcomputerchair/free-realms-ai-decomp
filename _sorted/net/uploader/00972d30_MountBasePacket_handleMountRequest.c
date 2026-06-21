// addr: 0x00972d30
// name: MountBasePacket_handleMountRequest
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool MountBasePacket_handleMountRequest(void * rider, void * mount, int *
   mountIndex, int failureCode_, void * callback) */

bool __thiscall
MountBasePacket_handleMountRequest
          (void *this,void *rider,void *mount,int *mountIndex,int failureCode_,void *callback)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  char *pcStack_80;
  char *pcStack_7c;
  undefined4 uStack_78;
  undefined1 *puStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  int *piStack_68;
  int *local_44;
  undefined4 local_40;
  int local_3c [5];
  void *pvStack_28;
  void *pvStack_24;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
                    /* Handles a mount packet request: logs rider/mount info to ClientMountLog.txt,
                       validates actor states, creates mount state, updates rider/mount links and
                       effects, or sends failure on invalid input. Caller name
                       MountBasePacket_subdispatch and log strings identify the domain. */
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_015977db;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  local_40 = *(undefined4 *)((int)this + 0x10c);
  local_44 = *(int **)((int)rider + 0x10c);
  local_3c[0] = (int)rider + 0x54;
  puVar2 = (undefined4 *)(**(code **)(*(int *)((int)rider + 0x54) + 0x10))();
  puVar3 = (undefined4 *)(**(code **)(*(int *)((int)this + 0x54) + 0x10))();
  piStack_68 = (int *)*puVar2;
  iStack_70 = puVar3[1];
  puStack_74 = (undefined1 *)*puVar3;
  pcStack_7c = "Mount, rider %s (%I64u), mount %s (%I64u), rider state %X";
  pcStack_80 = "ClientMountLog.txt";
  uStack_84 = 0x972dc9;
  uStack_78 = unaff_EBX;
  uStack_6c = unaff_ESI;
  FUN_00704db0();
  if (*(int *)((int)this + 0x1870) != 0) {
    ExceptionList = pvStack_24;
    return true;
  }
  if ((*(byte *)((int)this + 0x144) & 0x80) != 0) {
    FUN_0096a110();
  }
  iVar4 = (**(code **)(*(int *)this + 0x24))();
  iVar5 = (**(code **)(*(int *)rider + 0x24))();
  if (((iVar4 != 0) && (iVar5 != 0)) && (cVar1 = FUN_0076c590(), cVar1 != '\0')) {
    iVar4 = *(int *)(iVar5 + 0x2b0);
    cVar1 = FUN_0076c590();
    if (((cVar1 != '\0') && (iVar4 != 0)) && ((int)mount < *(int *)(iVar4 + 0x4e8))) {
      local_44 = Mem_Alloc(0x20);
      local_1c = (void *)0x0;
      if (local_44 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        piStack_68 = (int *)0x972e7e;
        iVar4 = MountRequestContext_ctor(local_44,(int)rider,(int)mount);
      }
      local_1c = (void *)0xffffffff;
      *(int *)((int)this + 0x1870) = iVar4;
      FUN_00786c30();
      FUN_00786c30();
      FUN_00786c30();
      cVar1 = FUN_008c4930();
      if (cVar1 != '\0') {
        puVar2 = (undefined4 *)(**(code **)(*(int *)((int)this + 0x54) + 0x10))();
        *(undefined4 *)((int)rider + 0x17a0) = *puVar2;
        piStack_68 = local_3c;
        *(undefined4 *)((int)rider + 0x17a4) = puVar2[1];
        uStack_6c = 0x972ef7;
        piStack_68 = (int *)FUN_0095da70();
        uStack_6c = 0x972eff;
        FUN_009606e0();
        iVar4 = *(int *)rider;
        (**(code **)(*(int *)this + 0x1c))();
        piStack_68 = (int *)0x972f12;
        (**(code **)(iVar4 + 0x20))();
      }
      FUN_009722d0();
      if (*(int *)((int)this + 0x17bc) != 0) {
        local_44 = (int *)&stack0xffffffa0;
        FUN_00769ab0();
        iVar4 = FUN_007c4710();
        if (iVar4 != 0) {
          piStack_68 = (int *)0x0;
          iStack_70 = 0;
          puStack_74 = (undefined1 *)0x0;
          uStack_78 = 0;
          pcStack_7c = (char *)0x0;
          uStack_6c = 0;
          pcStack_80 = *(char **)(iVar4 + 0x2c);
          uStack_84 = 0;
          local_44 = &iStack_8c;
          iStack_8c = 0;
          iStack_88 = iVar4;
          BasePlayerUpdatePacket_registerSubdispatchHandlers(rider,&local_44);
        }
      }
      *(undefined1 *)((int)this + 0x455) = 0;
      *(undefined4 *)((int)this + 0x450) = 0;
      cVar1 = FUN_00957f90();
      if (cVar1 != '\0') {
        FUN_008a6700();
        FUN_00b04310();
      }
      if (*(int *)((int)this + 0x48) == 0) {
        ExceptionList = pvStack_24;
        return true;
      }
      piVar6 = (int *)FUN_00a47c50();
      if (piVar6 == (int *)0x0) {
        ExceptionList = pvStack_24;
        return true;
      }
      (**(code **)(*piVar6 + 0x44))();
      ExceptionList = pvStack_24;
      return true;
    }
  }
  iVar4 = *local_44;
  piStack_68 = mount;
  local_44 = &iStack_70;
  puStack_74 = (undefined1 *)&iStack_70;
  uStack_78 = 0x973025;
  (**(code **)(iVar4 + 0x10))();
  uStack_78 = 0x97302c;
  FUN_0095ad80();
  ExceptionList = pvStack_28;
  return false;
}

