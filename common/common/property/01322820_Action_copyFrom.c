// addr: 0x01322820
// name: Action_copyFrom
// subsystem: common/common/property
// source (binary assert): common/common/property/Action.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Action_copyFrom(void * this, void * action) */

void __thiscall Action_copyFrom(void *this,void *action)

{
  undefined1 local_20 [12];
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Copies an Action by serializing the source into a temporary buffer and
                       deserializing it into this object. The method asserts the source action
                       pointer and uses virtual calls at offsets 0x28 and 0x24 around a temporary
                       stream/buffer. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01679008;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (action == (void *)0x0) {
    FUN_012f5a60("action","..\\common\\common\\property\\Action.cpp",0x5c5,
                 DAT_01b839d8 ^ (uint)&stack0xffffffd8);
  }
  PacketBuffer_init(local_20);
  uStack_4 = 0;
  (**(code **)(*(int *)action + 0x28))(local_20);
  (**(code **)(*(int *)this + 0x24))(&stack0xffffffdc);
  local_c = (void *)0xffffffff;
  RawBuffer_free(&stack0xffffffd8);
  ExceptionList = pvStack_14;
  return;
}

