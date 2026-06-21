// addr: 0x0143d020
// name: Engine_MatchViewBase_requireColumn
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Engine_MatchViewBase_requireColumn(uint columnId_) */

void Engine_MatchViewBase_requireColumn(uint columnId_)

{
  char cVar1;
  
                    /* Ensures a match-view column id is present, adding it only when the
                       existing-column check fails. */
  cVar1 = FUN_0143c250(columnId_);
  if (cVar1 == '\0') {
    FUN_0042c155(&columnId_);
  }
  return;
}

