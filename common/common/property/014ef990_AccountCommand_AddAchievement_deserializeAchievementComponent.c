// addr: 0x014ef990
// name: AccountCommand_AddAchievement_deserializeAchievementComponent
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool AccountCommand_AddAchievement_deserializeAchievementComponent(void *
   packet, void ** outComponent) */

bool __cdecl
AccountCommand_AddAchievement_deserializeAchievementComponent(void *packet,void **outComponent)

{
  bool bVar1;
  undefined1 uVar2;
  undefined4 *extraout_EAX;
  int *piVar3;
  uint *unaff_EDI;
  int local_8;
  undefined4 uStack_4;
  
                    /* Deserializes an optional component pointer for AccountCommand_AddAchievement:
                       clears any existing output object, reads a null marker or packed component
                       type id, constructs through ComponentFactory, and dispatches the component
                       deserialize method. */
  bVar1 = Deserializer_readInteger(packet,&local_8);
  if (!bVar1) {
    return false;
  }
  if (*outComponent != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*outComponent)(1);
    *outComponent = (void *)0x0;
  }
  if (local_8 != 0) {
    *outComponent = (void *)0x0;
    return true;
  }
  bVar1 = PacketBuffer_readPackedUInt(packet,&uStack_4,unaff_EDI);
  if (!bVar1) {
    return false;
  }
  ComponentFactory_initSingleton();
  piVar3 = (int *)(**(code **)*extraout_EAX)(uStack_4);
  if (piVar3 == (int *)0x0) {
    return false;
  }
  uVar2 = (**(code **)(*piVar3 + 0x24))(packet);
  *outComponent = piVar3;
  return (bool)uVar2;
}

