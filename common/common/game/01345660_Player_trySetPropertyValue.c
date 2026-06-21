// addr: 0x01345660
// name: Player_trySetPropertyValue
// subsystem: common/common/game
// source (binary assert): common/common/game/Player.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Player_trySetPropertyValue(void * this, void * target, int propertyId,
   void * value) */

bool __thiscall Player_trySetPropertyValue(void *this,void *target,int propertyId,void *value)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Asserts target and value, asks the target whether the property/value is
                       accepted, and when an expression-tree value is accepted copies/evaluates it
                       through a temporary ValueData owned by the player. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0167cdbb;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffff54;
  ExceptionList = &local_c;
  if (target == (void *)0x0) {
    FUN_012f5a60(&DAT_018778b4,"..\\common\\common\\game\\Player.cpp",0x385,uVar3);
  }
  if (value == (void *)0x0) {
    FUN_012f5a60("value","..\\common\\common\\game\\Player.cpp",0x386,uVar3);
  }
  cVar1 = (**(code **)(*(int *)target + 4))(propertyId,value);
  bVar2 = false;
  if (cVar1 != '\0') {
    if (*(int *)((int)value + 4) == 5) {
      EvaluationEnvironment_ctor();
      local_c = (void *)0x0;
      (**(code **)(*(int *)this + 0x84))(&stack0xffffff58);
      FUN_01301590(&stack0xffffff58);
      local_c = (void *)0xffffffff;
      FUN_01385460();
    }
    bVar2 = true;
  }
  ExceptionList = pvStack_14;
  return bVar2;
}

