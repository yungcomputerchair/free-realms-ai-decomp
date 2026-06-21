// addr: 0x00658a69
// name: GameObjectChain_validateAgainstIdVector
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool GameObjectChain_validateAgainstIdVector(void * object) */

bool __thiscall GameObjectChain_validateAgainstIdVector(void *this,void *object)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint index;
  int *local_8;
  
                    /* Walks a virtual next-object chain and validates each object against a vector
                       of expected ids, rolling back from the first modified object on failure. */
  index = 0;
  local_8 = (int *)0x0;
  iVar2 = StdVector_size(object);
  if (iVar2 != 0) {
    do {
      piVar3 = (int *)StdVectorDword_at_005db353(object,index);
      iVar2 = (**(code **)(*(int *)this + 0x2c8))();
      if (iVar2 != *piVar3) {
        iVar2 = *(int *)this;
        puVar4 = (undefined4 *)StdVectorDword_at_005db353(object,index);
        cVar1 = (**(code **)(iVar2 + 0x2d4))(*puVar4);
        if (cVar1 == '\0') goto LAB_00658ae6;
        if (local_8 == (int *)0x0) {
          local_8 = this;
        }
      }
      this = (void *)(**(code **)(*(int *)this + 0x2cc))();
      if (this == (int *)0x0) {
LAB_00658ae6:
        if (local_8 != (int *)0x0) {
          (**(code **)(*local_8 + 0x2d8))();
        }
        return false;
      }
      index = index + 1;
      uVar5 = StdVector_size(object);
    } while (index < uVar5);
  }
  return true;
}

