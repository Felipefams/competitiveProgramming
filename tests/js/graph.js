var __values = (this && this.__values) || function(o) {
    var s = typeof Symbol === "function" && Symbol.iterator, m = s && o[s], i = 0;
    if (m) return m.call(o);
    if (o && typeof o.length === "number") return {
        next: function () {
            if (o && i >= o.length) o = void 0;
            return { value: o && o[i++], done: !o };
        }
    };
    throw new TypeError(s ? "Object is not iterable." : "Symbol.iterator is not defined.");
};
var e_1, _a;
var v = 5;
var graph = new Array(v);
try {
    for (var graph_1 = __values(graph), graph_1_1 = graph_1.next(); !graph_1_1.done; graph_1_1 = graph_1.next()) {
        var i = graph_1_1.value;
        i = new Set([1, 2]);
    }
}
catch (e_1_1) { e_1 = { error: e_1_1 }; }
finally {
    try {
        if (graph_1_1 && !graph_1_1.done && (_a = graph_1.return)) _a.call(graph_1);
    }
    finally { if (e_1) throw e_1.error; }
}
