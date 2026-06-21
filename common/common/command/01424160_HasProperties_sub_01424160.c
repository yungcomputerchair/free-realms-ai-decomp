// addr: 0x01424160
// name: HasProperties_sub_01424160
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall HasProperties_sub_01424160(undefined4 *param_1)

{
                    /* Identifies a HasProperties sub_01424160 routine. Evidence: vftable/call-shape
                       evidence in ctx. */
  *param_1 = HasProperties::vftable;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  return;
}

