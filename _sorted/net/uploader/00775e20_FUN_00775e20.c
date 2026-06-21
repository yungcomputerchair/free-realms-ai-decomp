// addr: 0x00775e20
// name: FUN_00775e20
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool initializeCollisionDataAndValidate(void * this, void * source, void *
   callback) */

bool __thiscall initializeCollisionDataAndValidate(void *this,void *source,void *callback)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates AppPhysics::CollisionData, stores it at this+0x28, validates source
                       data, and invokes success or failure callback methods. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015579cb;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  puVar3 = Mem_Alloc(0x10);
  uVar5 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = AppPhysics::CollisionData::vftable;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *(undefined1 *)(puVar3 + 3) = 0;
    *(undefined1 *)((int)puVar3 + 0xd) = 0;
    puVar4 = puVar3;
  }
  local_4 = 0xffffffff;
  *(undefined4 **)((int)this + 0x28) = puVar4;
  if (*(int *)((int)source + 8) != 0) {
    uVar5 = *(undefined4 *)((int)source + 4);
  }
  cVar1 = FUN_00fdfab0(uVar5,*(int *)((int)source + 8));
  if (cVar1 != '\0') {
    *(undefined1 *)((int)this + 0x1c) = 1;
    (*(code *)**(undefined4 **)callback)();
    ExceptionList = puVar3;
    return true;
  }
  (**(code **)(*(int *)callback + 4))(this,uVar2);
  ExceptionList = puVar3;
  return false;
}

