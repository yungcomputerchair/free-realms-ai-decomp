// addr: 0x01322fe0
// name: FUN_01322fe0
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


bool FUN_01322fe0(void *param_1,int *param_2)

{
  bool bVar1;
  undefined1 uVar2;
  undefined4 *extraout_EAX;
  int *piVar3;
  uint *unaff_EDI;
  int local_8;
  undefined4 uStack_4;
  
                    /* Generated nullable component-pointer deserializer: reads the null flag,
                       deletes any existing output object, reads a packed component type id, creates
                       it via ComponentFactory, calls vtable deserialize, and writes the pointer. No
                       class-specific strings or RTTI identify the owning type. */
  bVar1 = Deserializer_readInteger(param_1,&local_8);
  if (!bVar1) {
    return bVar1;
  }
  if ((undefined4 *)*param_2 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_2)(1);
    *param_2 = 0;
  }
  if (local_8 != 0) {
    *param_2 = 0;
    return true;
  }
  bVar1 = PacketBuffer_readPackedUInt(param_1,&uStack_4,unaff_EDI);
  if (!bVar1) {
    return bVar1;
  }
  ComponentFactory_initSingleton();
  piVar3 = (int *)(**(code **)*extraout_EAX)(uStack_4);
  if (piVar3 == (int *)0x0) {
    return false;
  }
  uVar2 = (**(code **)(*piVar3 + 0x24))(param_1);
  *param_2 = (int)piVar3;
  return (bool)uVar2;
}

