// addr: 0x012c5240
// name: FilterCriteria_matchesSortable
// subsystem: common/common/sort
// source (binary assert): common/common/sort/SortService.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool FilterCriteria_matchesSortable(void * thisObj, void * sortable) */

bool __thiscall FilterCriteria_matchesSortable(void *this,void *thisObj,void *sortable)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  void *thisObj_00;
  undefined4 uVar4;
  undefined1 local_18 [8];
  int iStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Evaluates a filter criterion against a Sortable, including special
                       Archetype/PropertyVector16 pseudo-fields 0xfc7, 0xff6, 0xff7, and 0xff8.
                       Evidence is the 'sortable' assert, Sortable-to-Archetype RTTI cast,
                       PropertyVector16 getters, and comparison against the criterion's stored
                       value. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0166ea38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (thisObj == (void *)0x0) {
    FUN_012f5a60("sortable","..\\common\\common\\sort\\SortService.cpp",0xc0,
                 DAT_01b839d8 ^ (uint)&stack0xffffffdc);
  }
  FUN_012fa910();
  uStack_4 = 0;
  iVar3 = *(int *)((int)this + 4);
  if ((((iVar3 != 0xfc7) && (iVar3 != 0xff6)) && (iVar3 != 0xff7)) && (iVar3 != 0xff8)) {
    cVar1 = (**(code **)(*(int *)thisObj + 8))(iVar3,local_18);
    if (cVar1 == '\0') {
      if ((*(int *)((int)this + 8) == 4) &&
         (cVar1 = (**(code **)(*(int *)thisObj + 8))(*(undefined4 *)((int)this + 4),local_18),
         cVar1 == '\0')) {
        uStack_4 = 0xffffffff;
        FUN_01300cd0();
        ExceptionList = local_c;
        return true;
      }
      uStack_4 = 0xffffffff;
      FUN_01300cd0();
      ExceptionList = local_c;
      return false;
    }
    uVar4 = *(undefined4 *)((int)this + 8);
    goto LAB_012c53de;
  }
  iVar3 = FUN_00d8d382(thisObj,0,&Sortable::RTTI_Type_Descriptor,&Archetype::RTTI_Type_Descriptor,0)
  ;
  if (iVar3 != 0) {
    if ((*(void **)((int)this + 0x18) == (void *)0x0) ||
       (thisObj_00 = Archetype_findChildPropertyContainer(*(void **)((int)this + 0x18)),
       thisObj_00 == (void *)0x0)) {
      FUN_01300680(2);
      iStack_10 = 0;
    }
    else {
      switch(*(undefined4 *)((int)this + 4)) {
      case 0xfc7:
        iVar3 = PropertyVector16_getCount((int)thisObj_00);
        break;
      default:
        goto switchD_012c5392_caseD_fc8;
      case 0xff6:
        iVar3 = PropertyVector16_getOffset(thisObj_00);
        break;
      case 0xff7:
        iVar3 = PropertyVector16_getCountAfterOffset(thisObj_00);
        break;
      case 0xff8:
        iVar3 = PropertyVector16_getOffsetMinusCount(thisObj_00);
      }
      FUN_01300680(2);
      iStack_10 = iVar3;
    }
  }
switchD_012c5392_caseD_fc8:
  uVar4 = *(undefined4 *)((int)this + 8);
LAB_012c53de:
  uVar2 = FUN_012fe9b0(local_18,uVar4);
  uStack_4 = 0xffffffff;
  FUN_01300cd0();
  ExceptionList = local_c;
  return (bool)uVar2;
}

