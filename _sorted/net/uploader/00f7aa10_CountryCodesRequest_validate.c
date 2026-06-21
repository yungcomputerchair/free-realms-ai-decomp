// addr: 0x00f7aa10
// name: CountryCodesRequest_validate
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CountryCodesRequest_validate(int this_, void * reporter) */

bool __thiscall CountryCodesRequest_validate(void *this,int this_,void *reporter)

{
  uint uVar1;
  undefined **local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Validates CountryCodesRequest required fields: url, userAgent, and locale;
                       reports a specific validation error and returns false when any are missing.
                        */
  puStack_8 = &LAB_01628368;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_14;
  if (*(int *)((int)this + 0x28) == 0) {
    local_14 = Uram::ObjectReportHandlerAdapter::vftable;
    local_10 = this_;
    local_4 = 0;
    ExceptionList = &local_c;
    FUN_00f99fd0(2,&local_14,"CountryCodesRequest::Validate, failed with invalid url",uVar1);
    ExceptionList = local_c;
    return false;
  }
  if (*(int *)((int)this + 0x38) == 0) {
    local_14 = Uram::ObjectReportHandlerAdapter::vftable;
    local_10 = this_;
    local_4 = 1;
    ExceptionList = &local_c;
    FUN_00f99fd0(2,&local_14,"CountryCodesRequest::Validate, failed with invalid userAgent",uVar1);
    ExceptionList = local_c;
    return false;
  }
  if (*(int *)((int)this + 8) == 0) {
    local_14 = Uram::ObjectReportHandlerAdapter::vftable;
    local_10 = this_;
    local_4 = 2;
    ExceptionList = &local_c;
    FUN_00f99fd0(2,&local_14,"CountryCodesRequest::Validate, failed with invalid locale",uVar1);
    ExceptionList = local_c;
    return false;
  }
  return true;
}

