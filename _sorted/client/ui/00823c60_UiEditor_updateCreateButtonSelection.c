// addr: 0x00823c60
// name: UiEditor_updateCreateButtonSelection
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UiEditor_updateCreateButtonSelection(char * selectedType, char *
   buttonName, int typeIndex_) */

void __cdecl
UiEditor_updateCreateButtonSelection(char *selectedType,char *buttonName,int typeIndex_)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined1 *puVar7;
  void **outObject;
  void *local_4;
  
                    /* Finds a GuiButtonCtrl by name and sets property id 10 to one of two strings
                       depending on whether selectedType matches the UI-control type string at
                       typeIndex. Used by the UI editor create-tool buttons. */
  outObject = &local_4;
  local_4 = (void *)0x0;
  iVar4 = FUN_00705bc0(buttonName);
  bVar3 = FUN_00819650(DAT_01be1090,iVar4,outObject);
  if ((bVar3) &&
     (iVar4 = FUN_00d8d382(local_4,0,&GObject::RTTI_Type_Descriptor,
                           &GuiButtonCtrl::RTTI_Type_Descriptor,0), iVar4 != 0)) {
    pcVar2 = (&PTR_s_Window_01b362f8)[typeIndex_ * 3];
    cVar1 = *pcVar2;
    pcVar5 = pcVar2;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
    }
    iVar6 = FUN_00401940(selectedType,pcVar2,pcVar5 + (1 - (int)pcVar2));
    puVar7 = &DAT_0176cfcc;
    if (iVar6 != 0) {
      puVar7 = &DAT_0176cfd0;
    }
    (**(code **)(*(int *)(iVar4 + 0x148) + 0x14))(10,puVar7);
  }
  return;
}

