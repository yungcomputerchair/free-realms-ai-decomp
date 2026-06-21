// addr: 0x0137a030
// name: Archetype_copyFrom
// subsystem: common/common/property
// source (binary assert): common/common/property/Archetype.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Archetype_copyFrom(void * this, void * archetype) */

void __thiscall Archetype_copyFrom(void *this,void *archetype)

{
  undefined1 local_20 [12];
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Copies an Archetype by serializing the source into a temporary buffer and
                       deserializing it into this object. It asserts the source archetype pointer
                       and uses paired virtual calls on the source and destination around the
                       temporary buffer. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01681c38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (archetype == (void *)0x0) {
    FUN_012f5a60("archetype","..\\common\\common\\property\\Archetype.cpp",0x6e1,
                 DAT_01b839d8 ^ (uint)&stack0xffffffd8);
  }
  PacketBuffer_init(local_20);
  uStack_4 = 0;
  (**(code **)(*(int *)archetype + 0x28))(local_20);
  (**(code **)(*(int *)this + 0x24))(&stack0xffffffdc);
  local_c = (void *)0xffffffff;
  RawBuffer_free(&stack0xffffffd8);
  ExceptionList = pvStack_14;
  return;
}

