// addr: 0x012b60c0
// name: ArchetypeDB_getInheritedPropertyValueHelper
// subsystem: common/common/property
// source (binary assert): common/common/property/ArchetypeDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ArchetypeDB_getInheritedPropertyValueHelper(void * archetype, void *
   value, int propertyId) */

bool ArchetypeDB_getInheritedPropertyValueHelper(void *archetype,void *value,int propertyId)

{
  void *pvVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined1 local_74 [12];
  undefined1 auStack_68 [4];
  void *pvStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [4];
  void *pvStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [4];
  void *pvStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [4];
  void *pvStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  pvVar1 = value;
                    /* Builds a property query/evaluation context for an archetype and copies the
                       resolved property value into the supplied ValueData. Evidence:
                       ArchetypeDB.cpp asserts 'value', caller is
                       ArchetypeDB_getInheritedPropertyValue, and it constructs/destroys
                       ValueData/property helper objects around propertyId. */
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_0166d320;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (value == (void *)0x0) {
    FUN_012f5a60("value","..\\common\\common\\property\\ArchetypeDB.cpp",0x23e,
                 DAT_01b839d8 ^ (uint)&stack0xffffff84);
  }
  FUN_012fa910();
  iStack_4 = 0;
  FUN_013010e0(pvVar1);
  SortService_getInstance();
  pvStack_54 = (void *)0x0;
  uStack_50 = 0;
  uStack_4c = 0;
  iStack_4._0_1_ = 1;
  FilterCriteria_ctor(auStack_28);
  iStack_4._0_1_ = 2;
  FilterCriteria_setPrimaryFilter(auStack_28,(int)archetype);
  FilterCriteria_setSecondaryFilter(auStack_28,1);
  FUN_012c54a0(local_74);
  value = auStack_28;
  FUN_012b5ab0(&value);
  PropertyObjectVector_fromSortableVector(auStack_48,(void *)propertyId);
  pvStack_64 = (void *)0x0;
  uStack_60 = 0;
  uStack_5c = 0;
  iStack_4._0_1_ = 4;
  bVar2 = SortService_filterSortablesByCriteria(auStack_48,auStack_68,auStack_58);
  value = (void *)CONCAT31(value._1_3_,bVar2);
  uVar3 = ArchetypeVector_fromSortableVector(auStack_38,auStack_68);
  iStack_4._0_1_ = 5;
  UIntVector_assign(uVar3);
  iStack_4 = CONCAT31(iStack_4._1_3_,4);
  if (pvStack_34 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_34);
  }
  pvStack_34 = (void *)0x0;
  uStack_30 = 0;
  uStack_2c = 0;
  iStack_4 = CONCAT31(iStack_4._1_3_,3);
  if (pvStack_64 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_64);
  }
  pvStack_64 = (void *)0x0;
  uStack_60 = 0;
  uStack_5c = 0;
  iStack_4 = CONCAT31(iStack_4._1_3_,2);
  if (pvStack_44 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_44);
  }
  pvStack_44 = (void *)0x0;
  uStack_40 = 0;
  uStack_3c = 0;
  iStack_4._0_1_ = 1;
  FilterCriteria_dtor(auStack_28);
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  if (pvStack_54 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_54);
  }
  pvStack_54 = (void *)0x0;
  uStack_50 = 0;
  uStack_4c = 0;
  iStack_4 = 0xffffffff;
  FUN_01300cd0();
  ExceptionList = local_c;
  return (bool)value._0_1_;
}

