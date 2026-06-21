// addr: 0x00821370
// name: GCtrl_getLayoutPropertyString
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool GCtrl_getLayoutPropertyString(void * this, int propertyId_) */

bool __thiscall GCtrl_getLayoutPropertyString(void *this,int propertyId_)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
                    /* Converts GCtrl layout/alignment/size-policy flags into string values such as
                       Left, Right, Stretch, PreferredExpanding, True, and False for property ids
                       0xe-0x15. The GCtrl class is identified by RTTI. */
  iVar1 = FUN_00d8d382(this,0,&GuiPropertySet::RTTI_Type_Descriptor,&GCtrl::RTTI_Type_Descriptor,0);
  if (iVar1 != 0) {
    if (propertyId_ == 0xe) {
      iVar2 = FUN_0043086f();
      if (iVar2 != 0) {
        FUN_0043086f(iVar1);
        iVar1 = FUN_0042b9bc(iVar1);
        if (iVar1 != 0) {
          switch(*(uint *)(iVar1 + 0x10) & 0xf) {
          case 0:
switchD_008213d4_caseD_0:
            FUN_00703620(L"Default");
            return true;
          case 1:
            FUN_00703620(L"Left");
            return true;
          case 2:
            FUN_00703620(L"Right");
            return true;
          case 3:
            FUN_00703620(L"Center");
            return true;
          case 4:
            FUN_00703620(L"Stretch");
            return true;
          case 5:
            FUN_00703620(L"EvenStretch");
            return true;
          case 6:
switchD_008213d4_caseD_6:
            FUN_00703620(L"EvenStretchMaxMin");
            return true;
          }
        }
      }
    }
    else if (propertyId_ == 0xf) {
      iVar2 = FUN_0043086f();
      if (iVar2 != 0) {
        FUN_0043086f(iVar1);
        iVar1 = FUN_0042b9bc(iVar1);
        if (iVar1 != 0) {
          switch(*(uint *)(iVar1 + 0x10) & 0xf0) {
          case 0:
            goto switchD_008213d4_caseD_0;
          case 0x10:
switchD_008214ac_caseD_10:
            FUN_00703620(&DAT_0177004c);
            return true;
          case 0x20:
switchD_008214ac_caseD_20:
            FUN_00703620(L"Bottom");
            return true;
          case 0x30:
switchD_008214ac_caseD_30:
            FUN_00703620(L"Center");
            return true;
          case 0x40:
switchD_008214ac_caseD_40:
            FUN_00703620(L"Stretch");
            return true;
          case 0x50:
switchD_008214ac_caseD_50:
            FUN_00703620(L"EvenStretch");
            return true;
          case 0x60:
            goto switchD_008213d4_caseD_6;
          }
        }
      }
    }
    else if (propertyId_ == 0x15) {
      if (*(int *)(iVar1 + 0xb4) != 0) {
        uVar3 = *(uint *)(*(int *)(iVar1 + 0xb4) + 0x10) & 0xf000;
        if (uVar3 < 0x3001) {
          if (uVar3 == 0x3000) goto switchD_008214ac_caseD_30;
          if (uVar3 == 0) goto switchD_008213d4_caseD_0;
          if (uVar3 == 0x1000) goto switchD_008214ac_caseD_10;
          if (uVar3 == 0x2000) goto switchD_008214ac_caseD_20;
        }
        else {
          if (uVar3 == 0x4000) goto switchD_008214ac_caseD_40;
          if (uVar3 == 0x5000) goto switchD_008214ac_caseD_50;
          if (uVar3 == 0x6000) goto switchD_008213d4_caseD_6;
        }
      }
    }
    else if (propertyId_ == 0x14) {
      if (*(int *)(iVar1 + 0xb4) != 0) {
        uVar3 = *(uint *)(*(int *)(iVar1 + 0xb4) + 0x10) & 0xf00;
        if (uVar3 < 0x301) {
          if (uVar3 == 0x300) goto switchD_008214ac_caseD_30;
          if (uVar3 == 0) goto switchD_008213d4_caseD_0;
          if (uVar3 == 0x100) {
            FUN_00703620(L"Left");
            return true;
          }
          if (uVar3 == 0x200) {
            FUN_00703620(L"Right");
            return true;
          }
        }
        else {
          if (uVar3 == 0x400) goto switchD_008214ac_caseD_40;
          if (uVar3 == 0x500) goto switchD_008214ac_caseD_50;
          if (uVar3 == 0x600) {
            FUN_00703620(L"EvenStretchMaxMin");
            return true;
          }
        }
      }
    }
    else if (propertyId_ == 0x10) {
      iVar2 = FUN_0043086f();
      if (iVar2 != 0) {
        FUN_0043086f(iVar1);
        iVar1 = FUN_0042b9bc(iVar1);
        if (iVar1 != 0) {
          uVar3 = *(uint *)(iVar1 + 0x10) & 0xf0000;
          if (uVar3 < 0x40001) {
            if (uVar3 == 0x40000) {
LAB_008216d8:
              FUN_00703620(L"Preferred");
              return true;
            }
            if (uVar3 == 0) goto switchD_008213d4_caseD_0;
            if (uVar3 == 0x10000) {
LAB_008216c1:
              FUN_00703620(L"Fixed");
              return true;
            }
            if (uVar3 == 0x20000) {
              FUN_00703620(L"Minimum");
              return true;
            }
          }
          else {
            if (uVar3 == 0x80000) {
LAB_00821736:
              FUN_00703620(L"Expanding");
              return true;
            }
            if (uVar3 == 0x90000) {
LAB_0082171f:
              FUN_00703620(L"FixedExpanding");
              return true;
            }
            if (uVar3 == 0xc0000) {
              FUN_00703620(L"PreferredExpanding");
              return true;
            }
          }
        }
      }
    }
    else {
      if (propertyId_ != 0x11) {
        if (propertyId_ == 0x12) {
          iVar2 = FUN_0043086f();
          if (iVar2 != 0) {
            FUN_0043086f(iVar1);
            iVar1 = FUN_0042b9bc(iVar1);
            if (iVar1 != 0) {
              uVar3 = *(uint *)(iVar1 + 0x10) & 0x1000000;
LAB_00821828:
              if (uVar3 != 0) {
                FUN_00703620(L"False");
                return true;
              }
              FUN_00703620(L"True");
              return true;
            }
          }
        }
        else {
          if (propertyId_ != 0x13) {
            return false;
          }
          iVar2 = FUN_0043086f();
          if (iVar2 != 0) {
            FUN_0043086f(iVar1);
            iVar1 = FUN_0042b9bc(iVar1);
            if (iVar1 != 0) {
              uVar3 = *(uint *)(iVar1 + 0x10) & 0x2000000;
              goto LAB_00821828;
            }
          }
        }
        FUN_00703620(&DAT_017f23c8);
        return true;
      }
      iVar2 = FUN_0043086f();
      if (iVar2 != 0) {
        FUN_0043086f(iVar1);
        iVar1 = FUN_0042b9bc(iVar1);
        if (iVar1 != 0) {
          uVar3 = *(uint *)(iVar1 + 0x10) & 0xf00000;
          if (uVar3 < 0x400001) {
            if (uVar3 == 0x400000) goto LAB_008216d8;
            if (uVar3 == 0) goto switchD_008213d4_caseD_0;
            if (uVar3 == 0x100000) goto LAB_008216c1;
            if (uVar3 == 0x200000) {
              FUN_00703620(L"Minimum");
              return true;
            }
          }
          else {
            if (uVar3 == 0x800000) goto LAB_00821736;
            if (uVar3 == 0x900000) goto LAB_0082171f;
            if (uVar3 == 0xc00000) {
              FUN_00703620(L"PreferredExpanding");
              return true;
            }
          }
        }
      }
    }
  }
  return false;
}

