// addr: 0x013454f0
// name: Player_setPropertyValue
// subsystem: common/common/game
// source (binary assert): common/common/game/Player.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Player_setPropertyValue(void * this, void * target, int propertyId, void
   * value) */

void __thiscall Player_setPropertyValue(void *this,void *target,int propertyId,void *value)

{
  uint uVar1;
  void *pvVar2;
  void *unaff_EDI;
  void *local_c;
  undefined1 *puStack_8;
  void *local_4;
  
                    /* Creates a default ValueData when needed, attaches it to the player, asserts
                       the target object, and forwards the property/value to the target's setter
                       virtual. */
  local_4 = (void *)0xffffffff;
  puStack_8 = &LAB_0167cd5b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  if (value == (void *)0x0) {
    pvVar2 = Mem_Alloc(0x94);
    local_4 = value;
    if (pvVar2 == (void *)0x0) {
      value = (void *)0x0;
    }
    else {
      value = (void *)EvaluationEnvironment_ctor();
    }
    local_4 = (void *)0xffffffff;
    (**(code **)(*(int *)this + 0x84))(value);
  }
  if (target == (void *)0x0) {
    FUN_012f5a60(&DAT_018778b4,"..\\common\\common\\game\\Player.cpp",0x355,uVar1);
  }
  (**(code **)(*(int *)target + 0xe0))(propertyId,value);
  ExceptionList = unaff_EDI;
  return;
}

