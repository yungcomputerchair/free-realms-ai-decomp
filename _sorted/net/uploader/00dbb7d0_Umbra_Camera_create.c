// addr: 0x00dbb7d0
// name: Umbra_Camera_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * Umbra_Camera_create(void) */

void * Umbra_Camera_create(void)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Creates an Umbra::Camera, allocating an Umbra backing object when needed,
                       installing the Umbra::Camera vftable, and linking the camera back into the
                       backing object. Evidence is Umbra::Camera::vftable and writes through the
                       Umbra global lock/unlock callbacks. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0161aac0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_01bf3db4 == 0) {
    pvVar1 = (void *)FUN_00dc37b0();
    ExceptionList = local_c;
    return pvVar1;
  }
  (**(code **)(*(int *)PTR_DAT_01b854b0 + 0x1c))(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  uStack_4 = 0;
  iVar2 = FUN_00dc4920(0x330);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00dc9ed0();
  }
  puVar4 = (undefined4 *)FUN_00dc4920(0x14);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[1] = 0xffffffff;
    puVar4[2] = 1;
    puVar4[3] = 0;
    *puVar4 = Umbra::Camera::vftable;
    puVar4[4] = uVar3;
    uStack_4 = CONCAT31(uStack_4._1_3_,1);
    (**(code **)(*(int *)PTR_DAT_01b854b0 + 0x1c))();
    *(undefined4 **)(puVar4[4] + 0x300) = puVar4;
    (**(code **)(*(int *)PTR_DAT_01b854b0 + 0x20))();
  }
  uStack_4 = 0xffffffff;
  (**(code **)(*(int *)PTR_DAT_01b854b0 + 0x20))();
  ExceptionList = local_c;
  return puVar4;
}

