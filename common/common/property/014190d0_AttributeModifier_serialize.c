// addr: 0x014190d0
// name: AttributeModifier_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint AttributeModifier_serialize(void * this, void * serializer) */

uint __thiscall AttributeModifier_serialize(void *this,void *serializer)

{
  uint uVar1;
  void *pvStack_34;
  uint uStack_30;
  void *pvStack_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Serializes AttributeModifier after its PlayElement base, including
                       card/action/property ids, modifier type, calculator value data, last value,
                       flags, last environment, static number, and inherited text. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01693538;
  local_c = ExceptionList;
  uStack_30 = DAT_01b839d8 ^ (uint)&stack0xffffffd4;
  ExceptionList = &local_c;
  pvStack_34 = serializer;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(serializer,"Starting AttributeModifier\n");
  PlayElement_serialize(this,serializer);
  DebugStream_writeCString(serializer,"CardID: ");
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x40));
  DebugStream_writeCString(serializer,"ActionID: ");
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x44));
  DebugStream_writeCString(serializer,"mProperty: ");
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x48));
  DebugStream_writeCString(serializer,"AttributeModifierType: ");
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x4c));
  DebugStream_writeCString(serializer,"Calculator ValueData: ");
  (**(code **)(*(int *)((int)this + 0x50) + 0x28))(serializer);
  DebugStream_writeCString(serializer,"Last Value: ");
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x5c));
  DebugStream_writeCString(serializer,"Enabled: ");
  Serializer_appendInteger(serializer,(uint)*(byte *)((int)this + 0x60));
  DebugStream_writeCString(serializer,"Modifying: ");
  Serializer_appendInteger(serializer,(uint)*(byte *)((int)this + 0x61));
  DebugStream_writeCString(serializer,"LastEnviroment: ");
  EvaluationEnvironment_setGame(*(undefined4 *)((int)this + 0x28));
  (**(code **)(*(int *)((int)this + 100) + 0x28))(serializer);
  PacketBuffer_init(&stack0xffffffd4);
  (**(code **)(*(int *)((int)this + 100) + 0x28))(&stack0xffffffd4);
  PacketBuffer_getSize(&uStack_30);
  Game_logGeneral(*(void **)((int)this + 0x28),
                  "AttributeModifier serializing LastEnvironment. peID: %d, size: %d",
                  *(undefined4 *)((int)this + 0x2c));
  DebugStream_writeCString(serializer,"StaticNumber");
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0xf8));
  DebugStream_writeCString(serializer,"InheritedGameText");
  Serializer_appendInteger(serializer,(uint)*(byte *)((int)this + 0xfc));
  DebugStream_writeCString(serializer,"Ending AttributeModifier\n");
  uVar1 = (**(code **)(*(int *)this + 0xc))(serializer);
  RawBuffer_free(&pvStack_34);
  ExceptionList = pvStack_20;
  return uVar1;
}

