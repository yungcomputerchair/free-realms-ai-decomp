// addr: 0x01438cb0
// name: FilterCriteria_createAndConfigure
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FilterCriteria_createAndConfigure(void * out, int primary_, int
   secondary_, int flags_) */

void FilterCriteria_createAndConfigure(void *out,int primary_,int secondary_,int flags_)

{
  void *this;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates/constructs FilterCriteria and sets primary and secondary filter
                       values before pushing into a list. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016973ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = Mem_Alloc(0x1c);
  this = (void *)0x0;
  local_4 = 0;
  if (local_10 != (void *)0x0) {
    this = FilterCriteria_ctor(local_10);
  }
  local_4 = 0xffffffff;
  local_10 = this;
  FilterCriteria_setPrimaryFilter(this,primary_);
  FilterCriteria_setSecondaryFilter(this,secondary_);
  FUN_012c54a0(flags_);
  FUN_012b5ab0(&local_10);
  ExceptionList = local_c;
  return;
}

