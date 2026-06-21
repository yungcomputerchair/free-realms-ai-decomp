// addr: 0x00d683d0
// name: UramUpdateCreditCardRequest_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall UramUpdateCreditCardRequest_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Identifies a UramUpdateCreditCardRequest ctor routine. Evidence:
                       vftable/call-shape evidence in ctx. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01618818;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00d68220(3);
  local_4 = 0;
  *param_1 = GameCommerce::UramManager::UramUpdateCreditCardRequest::vftable;
  UramPaymentSourceFields_ctor(param_1 + 0x10);
  ExceptionList = local_c;
  return param_1;
}

