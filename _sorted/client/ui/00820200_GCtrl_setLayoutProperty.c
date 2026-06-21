// addr: 0x00820200
// name: GCtrl_setLayoutProperty
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool GCtrl_setLayoutProperty(void * this, int propertyId_, int value_) */

bool __thiscall GCtrl_setLayoutProperty(void *this,int propertyId_,int value_)

{
  int iVar1;
  
                    /* Dynamic-casts a GuiPropertySet to GCtrl and dispatches layout-related
                       property ids 0xe-0x15 to setter vfuncs. Returns true when a recognized
                       property is applied. */
  iVar1 = FUN_00d8d382(this,0,&GuiPropertySet::RTTI_Type_Descriptor,&GCtrl::RTTI_Type_Descriptor,0);
  if (iVar1 != 0) {
    if (propertyId_ == 0xe) {
      (**(code **)(*(int *)this + 0x48))(iVar1,value_);
      return true;
    }
    if (propertyId_ == 0xf) {
      (**(code **)(*(int *)this + 0x4c))(iVar1,value_);
      return true;
    }
    if (propertyId_ == 0x14) {
      (**(code **)(*(int *)this + 0x50))(iVar1,value_);
      return true;
    }
    if (propertyId_ == 0x15) {
      (**(code **)(*(int *)this + 0x54))(iVar1,value_);
      return true;
    }
    if (propertyId_ == 0x10) {
      (**(code **)(*(int *)this + 0x58))(iVar1,value_);
      return true;
    }
    if (propertyId_ == 0x11) {
      (**(code **)(*(int *)this + 0x5c))(iVar1,value_);
      return true;
    }
    if (propertyId_ == 0x12) {
      (**(code **)(*(int *)this + 0x60))(iVar1,value_);
      return true;
    }
    if (propertyId_ == 0x13) {
      (**(code **)(*(int *)this + 100))(iVar1,value_);
      return true;
    }
  }
  return false;
}

