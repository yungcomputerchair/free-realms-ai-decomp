// addr: 0x00841580
// name: FUN_00841580
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_00841580(void * owner) */

void __fastcall FUN_00841580(void *owner)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Releases a reference-counted object at offset 0x11c, allocates/reconstructs a
                       replacement, stores it back, and initializes it with a global timing/value
                       pair. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0156ea9b;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  piVar1 = *(int **)((int)owner + 0x11c);
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar2 = piVar1[1] + -1;
    piVar1[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      (**(code **)(*piVar1 + 4))(uVar3);
    }
    *(undefined4 *)((int)owner + 0x11c) = 0;
  }
  pvVar4 = Mem_Alloc(0x128);
  uStack_4 = 0;
  if (pvVar4 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00840a20((int)owner + 300);
  }
  uStack_4 = 0xffffffff;
  *(undefined4 *)((int)owner + 0x11c) = uVar5;
  FUN_00fc6fb0(uVar5,DAT_01be15f4,DAT_01be15f4 >> 0x1f,0,0);
  ExceptionList = local_c;
  return;
}

