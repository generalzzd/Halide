((b.node_type() == IRNodeType::Add) && (
 rewrite((x < ((x + select(y, c0, c1)) + c1)), 0, ((max(c0, 0) + c1) <= 0)) ||
 rewrite((x < ((select(y, c0, c1) + x) + c1)), 0, ((max(c0, 0) + c1) <= 0)) ||
((a.node_type() == IRNodeType::Add) && (
 rewrite(((x + y) < (z + (w + (x + y)))), (x < (z + (w + x)))) ||
 rewrite(((x + y) < (z + (w + (y + x)))), (x < (z + (w + x)))) ||
 rewrite(((x + y) < (z + ((x + y) + w))), (y < (z + (y + w)))) ||
 rewrite(((x + y) < (z + ((y + x) + w))), (y < (z + (y + w)))) ||
 rewrite(((x + y) < ((z + (x + y)) + w)), (y < ((z + y) + w))) ||
 rewrite(((x + y) < ((z + (y + x)) + w)), (x < ((z + x) + w))) ||
 rewrite(((x + y) < (((x + y) + z) + w)), (y < ((y + z) + w))) ||
 rewrite(((x + y) < (((y + x) + z) + w)), (x < ((x + z) + w))))))) ||
((a.node_type() == IRNodeType::Div) && (
((b.node_type() == IRNodeType::Div) && (
 rewrite((((x + c0)/c1) < ((min(x, y) + c0)/c1)), 0, /* unproven */ ((((((((c0 + -1)/c1) <= (c0/c1)) && (((c0 + 2)/c1) <= ((c0 + 3)/c1))) && (((c0 + 1649)/c1) <= ((c0 + 1654)/c1))) && (((c0 + -1651)/c1) <= ((c0 + 228)/c1))) && (((c0 + -5411)/c1) <= ((c0 + -1652)/c1))))) ||
 rewrite((((x + c0)/c1) < ((min(y, x) + c0)/c1)), 0, /* unproven */ ((((((((c0 + -1)/c1) <= (c0/c1)) && (((c0 + 2)/c1) <= ((c0 + 3)/c1))) && (((c0 + 1649)/c1) <= ((c0 + 1654)/c1))) && (((c0 + -1651)/c1) <= ((c0 + 228)/c1))) && (((c0 + -5411)/c1) <= ((c0 + -1652)/c1))))) ||
 rewrite((((x + y)/c0) < ((x + min(y, z))/c0)), 0, /* unproven */ ((((((608/c0) <= (609/c0)) && (0 <= (610/c0))) && (0 <= (1008/c0))) && ((-1009/c0) <= 0)))) ||
 rewrite((((x + y)/c0) < ((x + min(z, y))/c0)), 0, /* unproven */ ((((((608/c0) <= (609/c0)) && (0 <= (610/c0))) && (0 <= (1008/c0))) && ((-1009/c0) <= 0)))) ||
 rewrite((((x + y)/c0) < ((y + min(x, z))/c0)), 0, /* unproven */ ((((((608/c0) <= (609/c0)) && (0 <= (610/c0))) && (0 <= (1008/c0))) && ((-1009/c0) <= 0)))) ||
 rewrite((((x + y)/c0) < ((y + min(z, x))/c0)), 0, /* unproven */ ((((((608/c0) <= (609/c0)) && (0 <= (610/c0))) && (0 <= (1008/c0))) && ((-1009/c0) <= 0)))) ||
 rewrite((((x + y)/c0) < ((min(x, z) + y)/c0)), 0, /* unproven */ ((((((608/c0) <= (609/c0)) && (0 <= (610/c0))) && (0 <= (1008/c0))) && ((-1009/c0) <= 0)))) ||
 rewrite((((x + y)/c0) < ((min(y, z) + x)/c0)), 0, /* unproven */ ((((((608/c0) <= (609/c0)) && (0 <= (610/c0))) && (0 <= (1008/c0))) && ((-1009/c0) <= 0)))) ||
 rewrite((((x + y)/c0) < ((min(z, x) + y)/c0)), 0, /* unproven */ ((((((608/c0) <= (609/c0)) && (0 <= (610/c0))) && (0 <= (1008/c0))) && ((-1009/c0) <= 0)))) ||
 rewrite((((x + y)/c0) < ((min(z, y) + x)/c0)), 0, /* unproven */ ((((((608/c0) <= (609/c0)) && (0 <= (610/c0))) && (0 <= (1008/c0))) && ((-1009/c0) <= 0))))))))