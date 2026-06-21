// addr: 0x008399e0
// name: GCtrl_applyDefaultLayoutProperties
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GCtrl_applyDefaultLayoutProperties(void * ctrl, bool useBaked_) */

void __cdecl GCtrl_applyDefaultLayoutProperties(void *ctrl,bool useBaked_)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined3 in_stack_00000009;
  
                    /* Sets default or baked layout property strings on a GCtrl/GuiPropertySet,
                       including size policies and AlignH/AlignV, then applies additional layout
                       flags. Referenced strings include Default, Fixed, Baked, AlignV, and AlignH.
                        */
  piVar2 = (int *)FUN_00d8d382(ctrl,0,&GCtrl::RTTI_Type_Descriptor,
                               &GuiPropertySet::RTTI_Type_Descriptor,0);
  iVar1 = _useBaked_;
  if (piVar2 != (int *)0x0) {
    if (_useBaked_ == 0) {
LAB_00839a3d:
      FUN_00839030(piVar2,iVar1,0x10,"Default");
      FUN_00839030(piVar2,iVar1,0x11,"Default");
    }
    else {
      _useBaked_ = 0;
      iVar3 = FUN_00d51810("Baked",&useBaked_);
      if (((iVar3 == 0) || (_useBaked_ != 1)) || (DAT_01be14c8 != '\0')) goto LAB_00839a3d;
      (**(code **)(*piVar2 + 0x14))(0x10,"Fixed");
      (**(code **)(*piVar2 + 0x14))(0x11,"Fixed");
    }
    if ((iVar1 == 0) || (PTR_s_AlignH_01b35068 == (undefined *)0x0)) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)FUN_00d517f0(PTR_s_AlignH_01b35068);
      if (pcVar4 == (char *)0x0) {
        pcVar4 = "Default";
      }
    }
    (**(code **)(*piVar2 + 0x14))(0xe,pcVar4);
    if ((iVar1 == 0) || (PTR_s_AlignV_01b35078 == (undefined *)0x0)) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)FUN_00d517f0(PTR_s_AlignV_01b35078);
      if (pcVar4 == (char *)0x0) {
        pcVar4 = "Default";
      }
    }
    (**(code **)(*piVar2 + 0x14))(0xf,pcVar4);
  }
  if (iVar1 != 0) {
    _useBaked_ = 0;
    iVar3 = FUN_00d51810("Baked",&useBaked_);
    if (((iVar3 != 0) && (uVar5 = 1, _useBaked_ == 1)) && (DAT_01be14c8 == '\0')) goto LAB_00839b17;
  }
  uVar5 = 0;
LAB_00839b17:
  FUN_00839530(iVar1,ctrl,uVar5);
  FUN_00839610(iVar1,ctrl,0);
  return;
}

