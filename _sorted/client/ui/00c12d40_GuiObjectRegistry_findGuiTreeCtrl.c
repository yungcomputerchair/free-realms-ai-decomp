// addr: 0x00c12d40
// name: GuiObjectRegistry_findGuiTreeCtrl
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GuiObjectRegistry_findGuiTreeCtrl(char * name) */

void * __cdecl GuiObjectRegistry_findGuiTreeCtrl(char *name)

{
  bool bVar1;
  int id_;
  void *pvVar2;
  void **outObject;
  void *local_4;
  
                    /* Hashes a UI object name, looks it up in the object registry, and casts the
                       found GObject to GuiTreeCtrl. Returns null on miss or failed cast. */
  outObject = &local_4;
  local_4 = (void *)0x0;
  id_ = FUN_00705bc0(name);
  bVar1 = FUN_00819650(DAT_01be1090,id_,outObject);
  if (bVar1) {
    pvVar2 = (void *)FUN_00d8d382(local_4,0,&GObject::RTTI_Type_Descriptor,
                                  &GuiTreeCtrl::RTTI_Type_Descriptor,0);
    return pvVar2;
  }
  return (void *)0x0;
}

